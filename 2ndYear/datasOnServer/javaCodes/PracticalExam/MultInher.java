class A {
  A(){
    System.out.println("A is being called.");
  }
}

class B extends A {
  B(){
    System.out.println("B is being called.");
  }
}

class C extends B {
  C(){
    System.out.println("C is being called.");
  }
}

class MultInher {
  public static void main(String args[]){
    new C();
  }
}
