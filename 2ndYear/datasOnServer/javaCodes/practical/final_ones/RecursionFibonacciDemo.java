import java.util.Scanner;

class RecursionFibonacci {
  static int n1 = 0, n2 = 1, n3 = 0;

  static void displayFibonacci(int count) {
    if (count > 0) {
      n3 = n1 + n2;
      n1 = n2;
      n2 = n3;
      System.out.print(" " + n3);
      displayFibonacci(count - 1);
    }
  }
}

class RecursionFibonacciDemo {
  public static void main(String args[]) {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter number of Terms: ");
    int count = in.nextInt();
    System.out.print(RecursionFibonacci.n1 + " " + RecursionFibonacci.n2);
    RecursionFibonacci.displayFibonacci(count - 2);
  }
}
