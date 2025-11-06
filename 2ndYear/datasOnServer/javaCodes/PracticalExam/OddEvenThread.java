class NumberPrinter {
  synchronized void num_printer(boolean even) {
    System.out.println();
    if (even) {
      for (int i = 30; i >= 2; i--)
        if (i % 2 == 0)
          System.out.print(i + " ");
      return;
    }
    for (int i = 1; i <= 30; i++)
      if (i % 2 != 0)
        System.out.print(i + " ");
  }
}

class OddEvenThread extends Thread {
  NumberPrinter p;
  boolean even;

  OddEvenThread(NumberPrinter p, boolean even) {
    this.p = p;
    this.even = even;
  }

  public void run(){
    p.num_printer(even);
  }

  public static void main(String[] args) {
    NumberPrinter p = new NumberPrinter();
    OddEvenThread even = new OddEvenThread(p, true);
    OddEvenThread odd = new OddEvenThread(p, false);
    odd.start();
    even.start();
  }
}
