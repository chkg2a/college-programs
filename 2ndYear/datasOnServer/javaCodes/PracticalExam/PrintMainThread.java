class DaemonThread extends Thread {
  public void run() {
    if (Thread.currentThread().isDaemon())
      System.out.println("Daemon Thread is running.");
  }
}

class PrintMainThread {
  public static void main(String args[]) {
    Thread th = new Thread();
    System.out.println("Main Thread name : " + th.getName());
    System.out.println("Main Thread priority : " + th.getPriority());

    DaemonThread ths = new DaemonThread();
    ths.setDaemon(true);
    ths.start();
  }
}
