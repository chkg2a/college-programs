class Print {
  synchronized void print_table(int n){
    for(int i = 1; i <=10; i++)
      System.out.println(n + " * " + i + " = " + n * i);
  }
}

class TableThread extends Thread{
  Print p;
  int n;

  TableThread(Print p, int n){
    this.p = p;
    this.n = n;
  }

  public void run(){
    p.print_table(n);
  }

  public static void main(String args[]) {
    Print printer = new Print();
    TableThread fifteen = new TableThread(printer,15);
    TableThread twentyfive = new TableThread(printer,25);
    fifteen.start();
    twentyfive.start();
  }
}
