class Employee {
  static int counter = 0;
  int employee_id = 0;
  String employee_name;
  int employee_salary;

  Employee(){
    counter++;
    employee_id = counter;
    employee_name = "undefined";
    employee_salary = 0;
  }

  Employee(String name){
    counter++;
    employee_id = counter;
    employee_name = name;
    employee_salary = 0;
  }

  Employee(String name, int salary){
    counter++;
    employee_id = counter;
    employee_name = name;
    employee_salary = salary;
  }

  void print_details(){
    System.out.println("Employee id : " + employee_id);
    System.out.println("Employee name : " + employee_name);
    System.out.println("Employee salary : " + employee_salary);
  }

}

class EmployeeDemo {
  public static void main(String args[]){
    Employee [] emps = new Employee[5];
    emps[0] = new Employee();
    emps[1] = new Employee("Josee");
    emps[2] = new Employee("James Smith", 20000);
    emps[3] = new Employee("Francois Sagan", 40000);
    emps[4] = new Employee("Stephen King", 50000);
    for (int i = 0; i < emps.length; i++){ 
      emps[i].print_details();
      System.out.println("------------------");
    }
  }
}
