class PrintTable { 
  synchronized void printTable(int a){
    for (int i = 1; i <= 10; i++ )
      System.out.println(a * i + "\t");
  }
}

class Fift extends Thread {
  PrintTable p;
  Fift(PrintTable p){
    this.p = p;
  } 
  public void run(){
    p.printTable(15);
  }
}

class Twen extends Thread {
  PrintTable p;
  Twen(PrintTable p){
    this.p = p;
  } 
  public void run(){
    p.printTable(25);
  }
}

class ThreadsExample {
  public static void main(String args[]){
    PrintTable pt1 = new PrintTable();
    Fift fif = new Fift(pt1);
    Twen twen = new Twen(pt1);
    fif.start();
    twen.start();
  }
}
