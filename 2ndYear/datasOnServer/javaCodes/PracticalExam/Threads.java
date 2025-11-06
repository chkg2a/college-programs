class OddThread extends Thread {
  public void run(){
    for (int i = 0; i <= 20; i++)
      if (i % 2 != 0) System.out.print(i + " ");
  }
}

class EvenThread extends Thread {
  public void run(){
    for (int i = 0; i <= 20; i++)
      if (i % 2 == 0) System.out.print(i + " ");
  }
}

class Threads {
  public static void main(String args[]){
    EvenThread even = new EvenThread();
    OddThread odd = new OddThread();

    even.start();
    odd.start();
  }
}
