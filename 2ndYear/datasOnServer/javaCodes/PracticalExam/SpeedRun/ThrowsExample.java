class ThrowsExample {
  public static void divide(int a, int b) throws ArithmeticException {
    try {
      if (b == 0){
        throw new ArithmeticException("Cannot divide by 0");
      }
      int c = a / b;
      System.out.println(c);
    } catch(Exception e){
      System.out.println("Error : " + e.getMessage());
    } finally {
      System.out.println("Hello");
    }
  }
  public static void main(String args[]){
    divide(10,5);
  }
}
