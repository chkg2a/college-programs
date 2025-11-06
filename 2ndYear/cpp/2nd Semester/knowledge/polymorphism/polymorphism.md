# Polymorphism
There are 2 types of polymorphism they are, Compile time and Run time

## Run Time Polymorphism (use overriding) - Late Binding/Dynamic Binding

## Compile Time Polymorphism (use overloading) - Binding

## Virtual function
We always need to ensure that virtual function should always be overriden in derived class. Otherwise you will get an incorrect output

when a class has one pure virtual function the class becomes an Abstract class
- Abstract Class
    - An abstract class cannot have objects of its own
    - i.e. we cannot write Shape S;

- How to solve it?
    - Using Pure Virtual Function
        - virtual void Display_Area(){};
        - virtual void Display_Area() = 0;
    - Won't be able to call the function
