import java.util.Scanner;

class SDAPrime {
  static boolean checkPrime(int num){
    if (num <= 1)
      return false;
    for (int i = 2; i < Math.sqrt(num); i++) {
      if (num % i == 0)
        return false;
    }
    return true;
  }
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int [] numbers = new int[20];
    System.out.println("Enter 20 numbers : ");
    for (int i = 0; i < 20; i++){
      numbers[i] = sc.nextInt();
    }
    for (int i = 0; i < 20; i++){
      if (checkPrime(numbers[i]))
        System.out.print(numbers[i] + " ");
    }
    sc.close();
  }
}
