import java.util.Scanner;

class SDA {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int [] nums = new int[10];
    System.out.println("Please enter a few numbers:");
    for (int i = 0; i < 10; i++){
      nums[i] = sc.nextInt();
    }
    for (int i = 0; i < 10; i++){
      if (nums[i] < 0)
      System.out.println(nums[i] + " ");
    }
    for (int i = 0; i < 10; i++){
      if (nums[i] >= 0)
      System.out.println(nums[i] + " ");
    }
  }
}
