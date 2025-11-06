import java.util.Scanner;
class PrimeNumbers {
  static boolean isPrime(int number) {
    if (number < 2)
      return false;
    for (int i = 2; i <= Math.sqrt(number); i++) {
      if (number % i == 0)
        return false;
    }
    return true;
  }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter n numbers : ");
    int n = scanner.nextInt();
    int[] primeNumbers = new int[n];
    int number = 1;
    int nums = 0;
    while (true) {
      if (isPrime(number)) {
        primeNumbers[nums] = number;
        nums++;
      }
      number++;
      if (nums >= n)
        break;
    }
    for (int i = 0; i < n; i++) {
      System.out.print(primeNumbers[i] + " ");
    }
  }
}
