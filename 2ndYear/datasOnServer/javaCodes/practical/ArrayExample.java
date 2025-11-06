class ArrayExample {
  public static void main(String [] args){
    try {
      int [] arr = {1,2,3};
      System.out.println(arr[3]);
    }
    catch(ArrayIndexOutOfBoundsException e){
      System.out.println("Bro code : " + e.getMessage());
    }
  }
}
