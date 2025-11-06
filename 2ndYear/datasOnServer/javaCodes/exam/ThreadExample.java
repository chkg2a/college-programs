class OddThread extends Thread {
  public void run(){
    for(int i = 1; i <= 20; i++){
      if( i % 2 == 0)
      System.out.println(i + " ");
    }
  }
}

class EvenThread extends Thread {
  public void run(){
    for(int i = 1; i <= 20; i++){
      if( i % 2 == 1)
      System.out.println(i + " ");
    }
  }
}

class ThreadExample {
  public static void main(String args[]) {
    OddThread odd = new OddThread();
    EvenThread even = new EvenThread();
    odd.start();
    even.start();
  }
}
