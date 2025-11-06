abstract class Shape {
  abstract void area(double x, double yy);
}

class Triangle extends Shape {
  void area(double x, double y){
    System.out.println("Area of Triangle : " + 0.5 * x * y);
  }
}

class Rectangle extends Shape {
  void area(double x, double y){
    System.out.println("Area of Rectangle : " + x * y);
  }
}

class Circle extends Shape {
  void area(double x, double y){
    System.out.println("Area of Circle : " + 3.14 * x * x);
  }
}

class ComputeArea {
  public static void main(String [] args){
    Shape ref;
    ref = new Triangle();
    ref.area(10,20);
    ref = new Rectangle();
    ref.area(10,20);
    ref = new Circle();
    ref.area(10,20);
  }
}
