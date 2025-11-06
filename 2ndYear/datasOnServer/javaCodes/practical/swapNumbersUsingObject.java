class SwapNums{
  int a, b;
  SwapNums(int x, int y){
    a = x;
    b = y;
  }
  void swap(){
    a ^= b;
    b ^= a;
    a ^= b;
  }
  void display(){
    System.out.println("a = " + a + " b = " + b);
  }
}
public class swapNumbersUsingObject {
  public static void main(String[] args) {
    SwapNums nos = new SwapNums(4, 1);
    nos.display();
    nos.swap();
    nos.display();
  }
}
