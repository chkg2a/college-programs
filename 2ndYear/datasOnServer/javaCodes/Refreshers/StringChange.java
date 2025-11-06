/*
 * Write a program in Java to accept a String from the user. Pass the String to a
function Change(String str) which displays the first character of each word after
changing the case (lower to upper and vice versa).
Sample Input: NORTH EASTERN REGIONAL INSTITUTE OF SCIENCE AND
TECHNOLOGY
Sample Output: NERIST*/

import java.util.Scanner;

class StringChange {
  static void Change(String sentence) {
    String[] words = sentence.split(" ");
    for (int i = 0; i < words.length; i++) {
      char ch = words[i].charAt(0);
      if (Character.isLowerCase(ch)) {
        System.out.print(Character.toUpperCase(ch));
      }else{
        System.out.print(Character.toLowerCase(ch));
      }
    }
  }

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.print("Please enter a sentence : ");
    String str = in.nextLine();
    Change(str);
  }
}
