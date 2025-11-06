import java.util.Scanner;

public class findLargestNumber {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int largest = Integer.MIN_VALUE;
    System.out.print("Please Enter Three Numbers: ");
    for(int i = 0; i < 3; i++){
      int num = sc.nextInt();
      if(num > largest)
        largest = num;
    }
    System.out.println("Largest Number : " + largest);
  }
}
