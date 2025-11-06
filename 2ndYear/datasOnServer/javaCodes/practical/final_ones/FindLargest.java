public class FindLargest {
  public static void main(String[] args) {
    int largest = Integer.MIN_VALUE;
    try{
      for(int i = 0; i < args.length; i++)
        largest = Math.max(Integer.parseInt(args[i]), largest);
      System.out.println("Largest : " + largest);
    }catch(Exception e){
      System.out.println("Invalid Input. Please enter valid integer");
    }
  }
}
