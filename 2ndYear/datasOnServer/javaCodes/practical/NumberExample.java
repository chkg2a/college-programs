class NumberExample {
  public static void main(String args[]){
    try {
      String number = "abc";
      int result = Integer.parseInt(number);
    } catch(NumberFormatException e) {
      System.out.println("Invalid number format :" + e.getMessage());
    }
  }
}
