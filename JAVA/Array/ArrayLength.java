public class ArrayLength {
    public static void main(String[] args) {
        
      // declare and initialize an array
      int arr[] = {10, 20, 30, 40, 50};
        
      // display array length
      System.out.print("The length of the given array = ");
        System.out.println(arr.length);


        /*-------------------------------------

         // defining array
    int[] a = {10,20,30,40,50};

    // display size of array
    System.out.println("Size = "+ a.length);

    // display array using length property
    System.out.println("Array elements:");
    for(int i=0; i < a.length; i++){
      System.out.print(a[i]+"\t");

        -------------------------------------*/


        /*-------------------------------------

        Find the length of MultiDimentional Array

        // declare and initialize an array
    int arr[][] = {{50,60},{70,80},{90,100}};
    
    // display array length
    System.out.print("The length of the given array = ");
    System.out.println(arr.length);
    System.out.println("arr[0] length = " + arr[0].length);
    System.out.println("arr[1] length = " + arr[0].length);
    System.out.println("arr[2] length = " + arr[0].length);

        -------------------------------------*/


        /*-------------------------------------

        Size of Jagged Array in Java
        Jagged Array in Java:- A multi-dimensional array with different sizes child array is called a Jagged array.
        It creates a table with different sizes of columns in a row.


        // Declare an jagged array 
        int[][] a = {{10,20},{30},{50,60,70},{80,90}};

    // display size of array
    System.out.println("Array size = "+ a.length);
    System.out.println("First row size = "+ a[0].length);
    System.out.println("Second row size = "+ a[1].length);

    // display array using length property
    System.out.println("Array elements:");
    for(int i=0; i < a.length; i++){
      for (int j=0; j < a[i].length; j++) {
        System.out.print(a[i][j] + "\t");
      }
      System.out.println();
    }

        -------------------------------------*/


        /*-------------------------------------

        // declare and initialize an three dimentional array
    int[][][] arr = { {{1,2},{3,4},{5,6}}, {{7,8},{9,1},{2,3}} };
    
    // display array length

    System.out.print("The length of the given array = ");
    System.out.println(arr.length);
    System.out.println("arr[0] length = " + arr[0].length);
    System.out.println("arr[0][0] length = " + arr[0][0].length);
    System.out.println("arr[0][1] length = " + arr[0][1].length);
    System.out.println("arr[0][2] length = " + arr[0][2].length);


        -------------------------------------*/

    }
  }