import java.util.Scanner;

class FactorialRecursion {
  int factorial(int n) // this is a recursive method
  {
    if (n == 1 || n == 0)
      return 1;
    else
      return (factorial(n - 1) * n);
  }
}

class FactorialRecursionDemo {
  public static void main(String args[]) {
    FactorialRecursion f = new FactorialRecursion();
    Scanner in = new Scanner(System.in);
    System.out.print("Enter first number: ");
    int n = in.nextInt();
    System.out.println("Factorial value=" + f.factorial(n));
  }
}
