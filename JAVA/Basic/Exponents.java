public class Exponents{
   public static void main(String[] args) {
   
      System.out.println(Math.exp(0));    // 1.0
      System.out.println(Math.exp(1));    // 2.718281828459045
      System.out.println(Math.exp(2));    // 7.38905609893065
      
      System.out.println(Math.exp(Double.NaN));   // NaN
      System.out.println(Math.exp(Double.POSITIVE_INFINITY));   // Infinity
      System.out.println(Math.exp(Double.NEGATIVE_INFINITY));  // 0.0
   }
}
