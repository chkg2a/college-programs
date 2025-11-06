import java.util.Scanner;

public class StandardDeviation {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    double[] numArray = new double[5];
    System.out.println("Enter 5 numbers : ");
    for (int i = 0; i < 5; i++) numArray[i] = sc.nextDouble();

    double SD = calculateSD(numArray);
    System.out.format("Standard Deviation = %.6f", SD);
  }

  public static double calculateSD(double numArray[]) {
    double sum = 0.0, standardDeviation = 0.0;
    int length = numArray.length;
    for (double num : numArray) sum += num;
    double mean = sum / length;
    for (double num : numArray) standardDeviation += Math.pow(num - mean, 2);
    return Math.sqrt(standardDeviation / length);
  }
}
