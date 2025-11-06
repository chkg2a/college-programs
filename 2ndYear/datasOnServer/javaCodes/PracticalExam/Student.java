package MyPackage;

public class Student {
  String name;
  int rollNo, mark_sub1, mark_sub2, mark_sub3;

  public Student() {
    name = "undefined";
    rollNo = 0;
    mark_sub1 = 0;
    mark_sub2 = 0;
    mark_sub3 = 0;
  };

  public Student(String name, int rollNo, int mark_sub1, int mark_sub2, int mark_sub3) {
    this.name = name;
    this.rollNo = rollNo;
    this.mark_sub1 = mark_sub1;
    this.mark_sub2 = mark_sub2;
    this.mark_sub3 = mark_sub3;
  }

  public void displayDetails() {
    System.out.println("Name: " + name);
    System.out.println("Roll No: " + rollNo);
    System.out.println("Marks in Subject 1: " + mark_sub1);
    System.out.println("Marks in Subject 2: " + mark_sub2);
    System.out.println("Marks in Subject 3: " + mark_sub3);
  }
}
