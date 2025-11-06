interface Animal {
  public static void eat(){
    System.out.println("Animaleating");
  };
}

interface Mammals {
  default void walk() {
    System.out.println("walking");
  }
}

class Human implements Animal, Mammals {
  public void eat(){
    System.out.println("eating");
  };
}

class Kid {
  void bro(){
    System.out.println("bro");
  }
}

class MessingWithClass {
  public static void main(String[] args) {
    Human human = new Human();
    human.eat();
    human.walk();
    Kid kid = new Kid();
    kid.bro();
  }
}
