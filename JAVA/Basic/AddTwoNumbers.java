import java.util.Scanner;
public class AddTwoNumbers {

    public static void main(String[] args) {
        
        // Declare variables
        int num1, num2, sum;
      // Create a new Scanner object.
        Scanner input = new Scanner(System.in);
        System.out.println("Enter First Number: ");
      // take input from the user.
        num1 = input.nextInt();
        
        System.out.println("Enter Second Number: ");
      // take input from the user.
        num2 = input.nextInt();
        
      // This line is optional
        input.close();
        sum = num1 + num2;
        System.out.println("Sum of these numbers: "+sum);
    }
}
