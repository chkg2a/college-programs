abstract class Shape{
  double x, y;
  abstract void area();
}

class Rectangle extends Shape {
  Rectangle(double a, double b){
    x = a;
    y = b;
  }
  void area(){
    System.out.println("Area of rectangle is : " + x * y);
  }
}

class Triangle extends Shape {
  Triangle(double a, double b){
    x = a;
    y = b;
  }
  void area(){
    System.out.println("Area of triangle is : " + (x * y) / 2);
  }
}

class Circle extends Shape {
  Circle(double a){
    x = a;
  }
  void area(){
    System.out.println("Area of circle is : " + 3.14 * x * x);
  }
}

class AreaMultInher {
  public static void main(String args[]){
    new Rectangle(19, 29).area();
    new Triangle(12, 23).area();
    new Circle(24).area();
  }
}
