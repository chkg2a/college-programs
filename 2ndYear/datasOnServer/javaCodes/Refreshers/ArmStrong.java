import java.util.Scanner;

class ArmStrong {
  static boolean isArmstrong(int num){
    int initialValue = num;
    int totalSum = 0;
    int noOfDigits = 0;
    int n = num;
    while(n > 0){
      n /= 10;
      noOfDigits++;
    }
    while(num > 0){
      int remai = num % 10;
      totalSum += Math.pow(remai,noOfDigits);
      num /= 10;
    }
    System.out.println(totalSum);
    System.out.println(initialValue);
    return (totalSum == initialValue ? true : false);
  }
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int num = 9474;
    if(isArmstrong(num)) System.out.println(num + " is Armstrong.");
    else System.out.println(num + " is not Armstrong.");
  }
}
