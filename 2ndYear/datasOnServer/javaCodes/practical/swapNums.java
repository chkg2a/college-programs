import java.util.Scanner;

class swapNums {
  static void swapNumbers(int [] arr){
    arr[0] ^= arr[1];
    arr[1] ^= arr[0];
    arr[0] ^= arr[1];
  }
  public static void main(String[] args) {
    int [] arr = new int[2];
    Scanner input = new Scanner(System.in);
    try{
      System.out.print("Please Enter two Numbers : ");
      for(int i = 0; i < 2; i++)
        arr[i] = input.nextInt();
      System.out.println("Before swap -> first num : " + arr[0] + ", second num : " + arr[1]);
      swapNumbers(arr);
      System.out.println("After swap -> first num : " + arr[0] + ", second num : " + arr[1]);
    }catch(Exception e){
      System.out.println("Invalid input. Please enter only integer values");
    }
    input.close();
  }
}
