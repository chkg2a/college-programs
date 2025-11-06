interface A {
  int a = 10;
  default void display(){
    System.out.println("A");
  };
}

interface B extends A {
  int a = 4;
  default void display(){
    System.out.println("B");
  };
}

interface C extends A {
  default void display(){
    System.out.println("C");
  };
}

class Diamond implements B, C {
  public void display(){
    System.out.println(A.a);
    B.super.display();
    C.super.display();
  }
}

class MIDiamond {
  public static void main(String[] args) {
    Diamond obj = new Diamond();
    obj.display();
  }
}
