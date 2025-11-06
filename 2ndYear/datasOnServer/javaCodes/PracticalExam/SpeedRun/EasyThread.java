class DaemonThread extends Thread {
  public void run(){
    if (isDaemon())
      print();
  }
  public void print(){
    System.out.println("Daemon Thread is running.");
  }
}

class EasyThread extends Thread{
  public static void main(String args[]){
    Thread th = new Thread();
    DaemonThread dt = new DaemonThread();
    System.out.println("Current Thread is : " + th);
    System.out.println("Current Thread Priority : " + th.getPriority());
    dt.setDaemon(true);
    dt.start();
  }
}
