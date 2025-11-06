interface A {
  default void m1() {
    System.out.println("A");
  }
}

class B implements A {
}

class DefaultMethod {
  public static void main(String[] args) {
    new B().m1();
  }
}
