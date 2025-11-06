import java.util.Scanner;

class A {
  int i;

  A() {
  }

  A(int x) {
    i = x;
    System.out.println("i = " + i);
  }
}

class B extends A {
  int j;
  B(int y){
    super(y);
    j = y;
    System.out.println("j = " + j);
  }
}

class SingleLevelInheritance {
  public static void main(String [] args){
    Scanner in = new Scanner(System.in);
    System.out.print("Enter i = ");
    int n = in.nextInt();
    System.out.print("Enter j = ");
    int m = in.nextInt();
    new A(n);
    new B(m);
  }
}
