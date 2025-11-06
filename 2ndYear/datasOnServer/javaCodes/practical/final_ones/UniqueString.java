import java.util.Scanner;
class UniqueString{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    System.out.print("Enter a string : ");
    String str = (in.nextLine()).toUpperCase();
    boolean isUnique = true;
    for(int i = 0; i < str.length(); i++){
      char ch = str.charAt(i);
      for(int j = i + 1; j < str.length(); j++){
        if(ch == str.charAt(j)){
          isUnique = false;
          break;
        }
      }
      if(!isUnique) break;
    }
    if(isUnique) System.out.println("Unique String");
    else System.out.println("Not Unique String");
  }
}
