import java.util.Scanner;

class Child {
  public static void main(String args[]){
    int age = 0;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter your age: ");
    age = sc.nextInt();
    try {
      if (age < 5)
        throw new ArithmeticException("You're not eligible");
      System.out.println("Welcome for enrollment.");
    }catch(ArithmeticException e){
      System.out.println(e.getMessage());
    }
  }
}
