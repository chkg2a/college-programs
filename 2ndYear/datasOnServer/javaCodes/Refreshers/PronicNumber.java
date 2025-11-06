import java.util.Scanner;

class PronicNumber {
  static boolean isPronic(int number){
    int output = 0;
    int i = 1;
    while(true){
      output = i * (i + 1);
      i += 1;
      if(output == number) return true;
      else if(output > number) return false;
    }
  }
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter a number : ");
    int number = in.nextInt();
    if(isPronic(number)) System.out.println(number + " is a Pronic number.");
    else System.out.println(number + " is not a Pronic number.");
  }
}
