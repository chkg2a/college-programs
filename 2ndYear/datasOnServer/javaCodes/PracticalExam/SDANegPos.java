import java.util.Scanner;

class SDANegPos {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int [] numbers = new int[10];
    System.out.println("Enter 10 numbers : ");
    for (int i = 0; i < 10; i++){
      numbers[i] = sc.nextInt();
    }
    for (int i = 0; i < 10; i++){
      if (numbers[i] < 0)
        System.out.print(numbers[i] + " ");
    }
    for (int i = 0; i < 10; i++){
      if (numbers[i] >= 0)
        System.out.print(numbers[i] + " ");
    }
    sc.close();
  }
}
