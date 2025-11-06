interface Shape {
  void area();
}

class Rectangle implements Shape {
  double x, y;

  Rectangle(double a, double b) {
    x = a;
    y = b;
  }

  public void area() {
    System.out.println("Area of rectangle is : " + x * y);
  }
}

class Triangle implements Shape {
  double x, y;

  Triangle(double a, double b) {
    x = a;
    y = b;
  }

  public void area() {
    System.out.println("Area of triangle is : " + (x * y) / 2);
  }
}

class Circle implements Shape {
  double x, y;

  Circle(double a) {
    x = a;
  }

  public void area() {
    System.out.println("Area of circle is : " + 3.14 * x * x);
  }
}

class AreaInterface {
  public static void main(String args[]) {
    Shape s1 = new Rectangle(10, 20);
    Shape s2 = new Triangle(10, 20);
    Shape s3 = new Circle(10);
    s1.area();
    s2.area();
    s3.area();
  }
}
