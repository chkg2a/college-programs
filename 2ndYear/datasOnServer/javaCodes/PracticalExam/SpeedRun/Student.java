package MyPackage;

public class Student {
  String name;
  int roll_number, mark1,mark2,mark3;
  int total_marks;
  public Student(String name, int roll_number, int mark1, int mark2, int mark3){
    this.name = name;
    this.roll_number = roll_number;
    this.mark1 = mark1;
    this.mark2 = mark2;
    this.mark3 = mark3;
  }
  public void display(){
    System.out.println("Name : " + name);
    System.out.println("Roll no : " + roll_number);
    System.out.println("Roll no : " + total_marks);
  }
  public void calculateTotal(){
    total_marks = mark1 + mark2 + mark3;
  }
}
