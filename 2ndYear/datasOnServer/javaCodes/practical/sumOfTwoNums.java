import java.util.Scanner;

public class sumOfTwoNums {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in); 
    int sum = 0, i = 0;
    System.out.print("Enter two numbers: ");
    
    while(i < 2){
      sum += sc.nextInt();   
      i++;
    }

    System.out.println("The Sum of Two Numbers = " + sum);

    sc.close();
  }
}
