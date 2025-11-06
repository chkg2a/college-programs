class SharedResource {
  static final Object R1 = new Object();
  static final Object R2 = new Object();
}

class Process1 extends Thread {
  public void run(){
    synchronized(SharedResource.R2){
      System.out.println("Process 1 locks R2");
      try { Thread.sleep(100); } catch (Exception e) {}
      System.out.println("Process 1: Waiting for R1");
      synchronized(SharedResource.R1){
        System.out.println("Process 1: Locked R2");
      };
    }
  } 
}

class Process2 extends Thread {
  public void run(){
    synchronized(SharedResource.R1){
      System.out.println("Process 2 locks R1");
      try { Thread.sleep(100); } catch (Exception e) {}
      System.out.println("Process 2: Waiting for R2");
      synchronized(SharedResource.R2){
        System.out.println("Process 2: Locked R1");
      };
    }
  }
}

class DeadLock {
  public static void main(String args[]){
    new Process1().start();
    new Process2().start();
  }
}
