// Write a program using a method Palin(), to check whether a string is a
// Palindrome or not. A Palindrome is a string that reads the same from the left to right
// and vice versa. Sample Input: MADAM, BOB, ABBA, POP etc.
//

import java.util.Scanner;

class PalinChecker {
  String [] words;
  PalinChecker(String [] words){
    this.words = words;
  }
  public void checkPalindrome(){
    for(String word : words){
      System.out.print(word + " is ");
      if(checkSinglePalin(word)){
        System.out.println("a palindrome.");
      }else{
        System.out.println("not a palindrome.");
      }
    }
  }
  public Boolean checkSinglePalin(String word){
    int strlen = word.length();
    String lword = word.toLowerCase();
    for(int i = 0; i < strlen/2; i++){
      if(!(lword.charAt(i) == lword.charAt(strlen - 1 - i))){
        return false;
      }
    }
    return true;
  }
}

class StringPalindrome {
  public static void main(String [] args){
    Scanner in = new Scanner(System.in);
    String [] words = {"MADAM", "BrO", "AbBa", "pop"};
    PalinChecker obj = new PalinChecker(words);
    obj.checkPalindrome();
  }
}
