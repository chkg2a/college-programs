class Volume {
  public static void printVol(int a){
    System.out.println("Volume of cube = " + a * a * a);
  }
  public static void printVol(int a, int b, int c){
    System.out.println("Volume of cuboid = " + a * b * c);
  }
  public static void main(String args[]){
    printVol(10);
    printVol(10,20,30);
  }
}
