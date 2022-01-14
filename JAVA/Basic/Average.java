public class Average {
  public static void main(String[] args) {

    double n;
    java.util.Scanner scan = new java.util.Scanner(System.in);
    System.out.println("Enter how many number you want to print average: ");
    n = scan.nextDouble();

    // declare sum variable
    // and initialize with 0
    double sum = 0.0;
    // declare average variable
    double avg = 0.0;

    for(int i = 1; i <= n; i++)
    {
        sum += scan.nextDouble();
    }
    avg = sum / n;

    // display result
    System.out.println("Average: " + avg );
  }
}
