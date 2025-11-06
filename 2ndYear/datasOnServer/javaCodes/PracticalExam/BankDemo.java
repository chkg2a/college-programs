class IBE extends Exception {
    public IBE(String message) {
        super(message);
    }
}

class Bank {
  String name;
  int amount;

  Bank(){}

  Bank(String name, int amount){
    this.name = name;
    this.amount = amount;
  }

  void deposit(int amount){
    this.amount += amount;
    System.out.println("Deposit Successful");
    System.out.println("Remaining Balance : " + this.amount);
  }
  
  void withdraw(int amount){
    try {
      if (this.amount < amount)
        throw new IBE("Insufficient bank balance");
      else
        this.amount -= amount;
      System.out.println("Withdrawal Successful");
      System.out.println("Remaining Balance : " + this.amount);
    }catch(Exception e){
      System.out.println(e.getMessage());
    }
  }
}

class BankDemo {
  public static void main(String args[]){
    Bank bank = new Bank("Rean Schwarzer", 1000);
    bank.deposit(1);
    System.out.println("");
    bank.withdraw(1002);
  }
}
