import java.util.Scanner;

public class storeNumsAndFindPrime {
  public static boolean isPrime(int num){
    if(num <= 1)
      return false;
    for(int i = 2; i <= Math.sqrt(num); i++){
      if(num % i == 0)
        return false;
    }
    return true;
  }
  public static void main(String[] args) {
    final int size = 10;
    int nums [] = new int[size];
    System.out.println("Enter 10 numbers :");
    Scanner sc = new Scanner(System.in);
    for(int i = 0; i < size; i++){
      nums[i] = sc.nextInt();
    }

    System.out.println("Prime Numbers are : ");
    for(int i = 0; i < size; i++){
      if(isPrime(nums[i]))
        System.out.println(nums[i]);
    }
  }
}
