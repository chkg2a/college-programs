class A {
  A(){
    System.out.println("A is called");
  }
}

class B extends A{

  B(){
    System.out.println("B is called");
  }
}

class C extends B {

  C(){
    System.out.println("C is called");
  }
}

class MultLevel {
  public static void main(String args[]){
    new C();
  }
}
