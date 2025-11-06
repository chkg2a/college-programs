/*
 *Write a program to enter a two digit number and find out its first factor
excluding 1 (one). The program then find the second factor (when the number
is divide by the first factor) and finally displays both the factors.
Hint: Use a non-return type function as void fact(int n) to accept the number.*/

class Factors {
  static void findFactors(int number){
    if (number <= 1) return;
    int firstFact = 0;
    for(int i = 2; i < number/2; i++){
      if(number % i == 0){
        firstFact = i;
        System.out.println(i);
        break;
      }
    }
    int secondFact = number / firstFact;
    System.out.println(number + " factors are " + firstFact + " " + secondFact);
  }
  public static void main(String[] args) {
      int num = 21; 
      findFactors(num);
  }
}
