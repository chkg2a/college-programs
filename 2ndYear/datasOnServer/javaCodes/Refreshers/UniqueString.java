/*
 *A string is said to be ‘Unique’ if none of the letters present in the string are
repeated. Write a program to accept a string and check whether the string is Unique
or not. The program displays a message accordingly.
Sample Input: COMPUTER
Sample Output: Unique String*/

import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

class UniqueString {
  static boolean Unique(String word){
    Set<Character> set = new HashSet<>();
    for(int i = 0; i < word.length(); i++){
      if(set.contains(word.charAt(i)))
        return false;
      set.add(word.charAt(i));
    }
    return true;
  }
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("Enter a word : ");
    String word = in.nextLine();
    if(Unique(word)) System.out.println(word + " is Unique.");
    else System.out.println(word + " is not Unique.");
  }
}
