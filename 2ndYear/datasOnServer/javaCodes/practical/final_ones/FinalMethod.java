class Parent{
final void display1(){System.out.println("Parent class method is running...");}
 }
class Child extends Parent
{ 
  void display1(){
    System.out.println("yo");
  }
  void display2()
 { System.out.println("child class method is running..."); }
 }
class FinalMethod
{
 public static void main(String args[])
 {
 //new Child().display1();
 //new Child().display2();
 // OR
 Child obj=new Child();
 obj.display1();
 obj.display2();
 }
} 
