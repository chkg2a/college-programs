class Shape {
  void area(int a, int b){}
}

class Rectangle extends Shape {
  void area(int a, int b){
    System.out.println("Area of Rectangle is " + a * b);
  }
}

class Triangle extends Shape {
  void area(int a,int b){
    System.out.println("Area of Rectangle is " + 0.5 * a * b);
  }
}

class Square extends Shape {
  void area(int a, int b){
    System.out.println("Area of Rectangle is " + a * a);
  }
}

class Area {
  public static void main(String args []){
    Shape sp = new Shape();
    sp = new Rectangle();
    sp = new Square();
    sp = new Triangle();
    sp.area(1,2);
  }
}
