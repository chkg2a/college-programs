public class RecursiveFactorial {

  // Compute factorial recursively
  static int factorial(int num) {
    if (num < 0) {
      throw new IllegalArgumentException("Factorial cannot be computed for negative numbers."); // Use exception for error
    }
    if (num <= 1) {
      return 1; // Base case: factorial of 0 or 1 is 1
    }
    return num * factorial(num - 1); // Recursive step
  }

  public static void main(String[] args) {
    try {
      System.out.println("Factorial: " + factorial(5)); // Test case for negative input
    } catch (Exception e) {
      System.out.println("Error: " + e.getMessage()); // Graceful error handling
    }
  }
}
