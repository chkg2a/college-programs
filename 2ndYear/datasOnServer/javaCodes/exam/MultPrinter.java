class Printer extends Thread{
  synchronized void printTable(int x){
    for(int i = 1; i <= 10; i++)
      System.out.println(i * x + " ");
  }
}

class PrintTableTen extends Thread {
  Printer p;
  PrintTableTen(Printer p){
    this.p = p;
  }
  public void run(){
    p.printTable(10);
  }
}

class PrintTableFiftheen extends Thread {
  Printer p;
  PrintTableFiftheen(Printer p){
    this.p = p;
  }
  public void run(){
    p.printTable(15);
  }
}

class MultPrinter {
  public static void main(String args[]){
    Printer p = new Printer();
    PrintTableTen pt = new PrintTableTen(p);
    PrintTableFiftheen pf = new PrintTableFiftheen(p);
    pt.start();
    pf.start();
  }
}
