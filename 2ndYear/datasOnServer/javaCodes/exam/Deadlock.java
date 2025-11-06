class Deadlock {
  public static Object R1 = new Object();
  public static Object R2 = new Object();

  public static class P1 extends Thread{
    public void run(){
      synchronized(R2){
        System.out.println("Object R2 has been occupied by P1");
        try {
          Thread.sleep(200);
        }catch(Exception e){
          System.out.println(e.getMessage());
        }
        System.out.println("P1 waiting for R1");
        synchronized(R1){
          System.out.println("Object R1 has been occupied by P1");
        }
      }
    }
  }

  public static class P2 extends Thread{
    public void run(){
      synchronized(R1){
        System.out.println("Object R1 has been occupied by P2");
        try {
          Thread.sleep(200);
        }catch(Exception e){
          System.out.println(e.getMessage());
        }
        System.out.println("P2 waiting for R1");
        synchronized(R2){
          System.out.println("Object R2 has been occupied by P2");
        }
      }
    }
  }

  public static void main(String args[]){
    new P1().start();
    new P2().start();
  }
}

