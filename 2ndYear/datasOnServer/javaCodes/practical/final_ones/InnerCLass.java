class Outer {
  int outer_x = 99;
  void display_inner_class(){
    Inner inner_class = new Inner(); 
    inner_class.display();
  }
  class Inner {
    void display(){
      System.out.println("outer x = " + outer_x);
    }
  }
}

class InnerCLass{
    public static void main(String args[]) {
      Outer outer_class = new Outer(); 
      outer_class.display_inner_class();
  }
}
