import java.util.Scanner;

class Factor{
  public void fact(int n ) {
    if(n < 10 || n > 99){
      System.out.println("Error! Please enter 2 digit no");
      return;
    }; int i;
    for(i = 2; i <= n; i++)
      if(n % i == 0) break;
    System.out.println(i + "," + n / i);
  }
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    System.out.print("Enter a number : ");
    int num = in.nextInt();
    Factor obj = new Factor();
    obj.fact(num);
  }
}
