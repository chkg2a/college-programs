/*Write a program in Java to accept a String from the user. Pass the String to a
function Display(String str) which displays the consonants present in the String.*/

import java.util.Scanner;

class Consonants {
  static boolean isVowel(char ch){
    return "aeiou".indexOf(ch) != -1;
  }
  static void Display(String str){
    for(int i = 0; i < str.length(); i++){
      char ch = str.charAt(i);
      if(!isVowel(ch)){
        System.out.print(ch);
      }
    }
  }
  public static void main(String [] args){
    Scanner in = new Scanner(System.in);
    System.out.print("Enter a String : ");
    String word = in.nextLine();
    Display(word);
  }
}
