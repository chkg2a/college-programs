class MainThreadTest {
  public static void main(String args[]) {
    Thread.currentThread().setName("My thread");
    System.out.println(Thread.currentThread());
  }
}
