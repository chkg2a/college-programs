class PrintName extends Thread {
  String name;

  PrintName() {
  }

  PrintName(String name) {
    this.name = name;
  }

  public void run() {
    System.out.println("I rate your name : " + name + " a " + (int)((Math.random() * 10) + 1) + " stars");
  }
}

class ThreadPriori {
  public static void main(String args[]) {
    PrintName obj1 = new PrintName("Renne Bright (MIN PRIOR)");
    PrintName obj2 = new PrintName("Shizuna Rem Misurugi (NORM PRIOR)");
    PrintName obj3 = new PrintName("Oliver Reise Arnor (MAX PRIOR)");

    obj1.setPriority(Thread.MIN_PRIORITY);
    obj2.setPriority(Thread.NORM_PRIORITY);
    obj3.setPriority(Thread.MAX_PRIORITY);

    obj1.start();
    obj2.start();
    obj3.start();
  }
}
