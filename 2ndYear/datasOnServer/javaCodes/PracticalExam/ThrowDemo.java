class ThrowDemo {
  static double divide(double a, double b) throws ArithmeticException {
    if (b == 0) throw new ArithmeticException("Division by 0 is not allowed.");
    return a / b;
  }

  public static void main(String args[]){
    System.out.println(divide(5,0));
  }
}
