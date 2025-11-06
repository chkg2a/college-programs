class Shape{
  int x;
  void area(){
    System.out.println("Area of shape is : " + x * x);
  };
}

class Square extends Shape {
  Square(int a){
    x = a;
  }
  void area(){
    System.out.println("Area of square is : " + x * x);
  }
}

class Circle extends Shape {
  Circle(int a){
    x = a;
  }
  void area(){
    System.out.println("Area of circle is : " + 3.14 * x * x);
  }
}

class SquareCircMult {
  public static void main(String args[]){
    new Square(20).area();
    new Circle(35).area();
  }
}
