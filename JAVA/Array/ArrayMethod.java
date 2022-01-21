public class ArrayMethod {

    public static void main(String[] args) {

      int[] array={5, 10, 20, 30, 55};
      display(array);
    }
  
    static void display(int[] a) {
      for(int i=0; i< a.length; i++) {

        System.out.print(a[i]+"\t");

      }
    }
  }