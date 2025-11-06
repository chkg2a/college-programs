import java.util.Scanner;
public class PronicNumbers {
  public static int pronic(int n){
    for(int i = 1; i <= n; i++)
      if(i * (i + 1) == n) return 1;
    return 0;
  }
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter a number : ");
    int num = in.nextInt();
    int r = pronic(num);
    if(r == 1) System.out.println(num + " is a pronic number.");
    else System.out.println(num + " is not a pronic number.");
  }
}
