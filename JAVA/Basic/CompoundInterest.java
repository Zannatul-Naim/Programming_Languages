import java.util.Scanner;

public class CompoundInterest {
   public static void main(String[] args) {

       double principal = 0.0, rate = 0.0, time = 0.0;
       int number = 0;
       double totalAmount = 0.0, cinterest = 0.0;
      
       Scanner scan = new Scanner(System.in);

      
       System.out.print("Enter principal amount:: ");
       principal = scan.nextDouble();
       System.out.print("Enter the annual compound interest rate :: ");
       rate = scan.nextDouble();
       rate = rate/100; // convert rate
       System.out.print("Enter time (in years):: ");
       time = scan.nextDouble();
       System.out.print("Enter the number of times that " + "interest is compounded per year:: ");
       number = scan.nextInt();

       // calculate total amount
       totalAmount = principal * Math.pow( 1+(rate/number), number*time);

       // calculate compound interest
       cinterest = totalAmount - principal;

       // display results
       System.out.println("Compound interest = "+ cinterest);
       System.out.println("Total amount = "+ totalAmount);

       // close Scanner class object
       scan.close();
   }
}
