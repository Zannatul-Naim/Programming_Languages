public class Swap {

  public static void main(String[] args) {

	int x=10, y=20;
    
  System.out.println("Values Before Swapping,");
	System.out.println("x = " + x + "\t y = " + y);
    
	int temp;
  // swapping two numbers using temp variable. 
	temp = x;
	x = y;
	y = temp;

	System.out.println("Values After Swapping,");
	System.out.println("x = " + x + "\t y = " + y);
  }
}
