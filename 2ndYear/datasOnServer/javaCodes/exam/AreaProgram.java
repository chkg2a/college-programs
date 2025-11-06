import java.util.Scanner;
abstract class Shape{
    abstract void area(double x, double y);
}

class Rectangle extends Shape {
    void area(double x, double y){
        System.out.println("The area of Rectangle = " + x * y);
    }
}

class Square extends Shape {
    void area(double x, double y){
        System.out.println("The area of Square = " + x * y);
    }
}

class Circle extends Shape {
    void area(double x, double y){
        System.out.println("The area of Circle = " + 3.14 * x * y);
    }
}

class AreaProgram {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length and breadth of Rectangle : ");
        new Rectangle().area(sc.nextDouble(), sc.nextDouble());
        System.out.println("Enter the length of Square : ");
        new Square().area(sc.nextDouble(), sc.nextDouble());
        System.out.println("Enter the length of Circle : ");
        new Circle().area(sc.nextDouble(),sc.nextDouble());
    }
}
