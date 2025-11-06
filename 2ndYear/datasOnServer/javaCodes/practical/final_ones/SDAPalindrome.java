import java.util.Scanner;
class SDAPalindrome
{
public static void main(String args[]) {
Scanner in = new Scanner(System.in);
String words[] = new String[10];
System.out.println("Enter 10 words:");
for (int i = 0; i < words.length; i++) {
words[i] = in.nextLine();
}
System.out.println("\nPalindrome Words:");
for (int i = 0; i < words.length; i++) {
String str = words[i].toUpperCase();
int strLen = str.length();
boolean isPalin = true;
for (int j = 0; j < strLen / 2; j++) {
if (str.charAt(j) != str.charAt(strLen - 1 - j)) {
isPalin = false;
break;
}
}
if (isPalin)
System.out.print(words[i] + " ");
}
}
}
