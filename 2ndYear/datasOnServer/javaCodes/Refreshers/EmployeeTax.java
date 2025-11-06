/*Write a program in Java to accept the name of an employee and his/her annual
income. Pass the name and the annual income to a function Tax(String name, int
income) which displays the name of the employee and the income tax as per the
given tariff:
Annual Income             Income Tax
Up to ₹2,50,000           No tax
₹2,50,001 to ₹5,00,000    10% of the income exceeding ₹2,50,000
₹5,00,001 to ₹10,00,000   ₹30,000 + 20% of the amount exceeding ₹5,00,000
₹10,00,001 and above      ₹50,000 + 30% of the amount exceeding ₹10,00,000*/

import java.util.Scanner;

class Employee {
  String name;
  int income;
  Employee(String name, int income){
    this.name = name;
    this.income = income;
  }
  String getName(){
    return this.name;
  }
  int getSalary(){
    return income;
  }
}

class EmployeeTax {
  static void displaySalary(String name, int income){
    System.out.println("-----");
    System.out.println(name + " earns " + income + " in a year.");
    System.out.println("-----");
  }
  static final void Tax(final String name, int income) {
    if(income <= 250000){
      ;
    }
    else if(income <= 500000){
      income = income - (int)(income * 0.1);
    }else if(income <= 1000000){
      income = income - 20000 - (int)(income * 0.2);
    }else{
      income = income - 30000 - (int)(income * 0.3);
    }
    displaySalary(name, income);
  }
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    System.out.print("Please enter the name of the Employee : ");
    String name = in.nextLine();
    System.out.print("Please enter the salary of the Employee : ");
    Integer income = in.nextInt();

    Employee emp1 = new Employee(name,income);
    name = emp1.getName(); 
    income = emp1.getSalary(); 

    Tax(name,income);
  }
}
