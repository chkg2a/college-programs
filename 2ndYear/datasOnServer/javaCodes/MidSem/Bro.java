class Hehe {
  final int x;
  Hehe(){
    x = 20;
  }
  Hehe(int y){
    System.out.println("bro");
  }
  void display(){
    System.out.println("x = " + x);
  }
}
class Bro {
  public static void main(String[] args) {
    Hehe h = new Hehe();
    h.display(); 
  }
}
