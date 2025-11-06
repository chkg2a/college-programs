import java.util.Scanner;
class FirstCharacter {
  public static void displayFirstChar(String word){
    String [] words = word.split(" ");
    for(int i = 0; i < words.length; i++){
      System.out.print(words[i].charAt(0));
    }
  }
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter a sentence: "); 
    String sentence = scanner.nextLine();
    displayFirstChar(sentence);
  }
}
