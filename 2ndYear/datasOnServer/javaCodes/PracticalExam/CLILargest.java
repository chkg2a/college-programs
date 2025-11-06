class CLILargest {
  public static void main(String args[]){
    int largest = Integer.parseInt(args[0]);
    for(int i = 0; i < 10; i++){
      int num = Integer.parseInt(args[i]);
      if (num > largest) largest = num;
    }
    System.out.print(largest);
  }
}
