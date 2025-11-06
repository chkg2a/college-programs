class DisplayNnPnums { 
  public static void main(String [] args){
    if(args.length <= 10) System.exit(1);
    int [] numbers = new int[10];
    for(int i = 0; i < 10; i++){
      numbers[i] = Integer.parseInt(args[i]);
    }
    for(int i = 0; i < numbers.length; i++){
      if(numbers[i] < 0)
      System.out.print(numbers[i] + " ");
    }
    for(int i = 0; i < numbers.length; i++){
      if(numbers[i] >= 0)
      System.out.print(numbers[i] + " ");
    }
  }
}
