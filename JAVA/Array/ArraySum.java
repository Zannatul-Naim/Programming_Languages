public class ArraySum {

    // main method
    public static void main(String[] args) {
      // array with explicit values
      int[] array = {5,15,25,35,45,55,65};
      int sum = 0;
      sum = sumOfArrayElements(array);
      System.out.println("\nSum of array elements: " + sum);
    }
  
    // method to display array elements
    // and calculate sum
    static int sumOfArrayElements(int[] a) {
      int sum=0;
      // display array and calculate sum
      for(int i=0; i< a.length; i++){
        System.out.print(a[i]+"\t");
        sum += a[i];
      }
      return sum;
    }  
  }