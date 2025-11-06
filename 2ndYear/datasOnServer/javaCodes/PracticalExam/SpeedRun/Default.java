interface Animal {
  default void bro(){
    System.out.println("HELLO");
  }
}

class Default implements Animal {
  public static void main(String args[]){
    new Default().bro();
  }
}
