public class MethodWithMultiParam {
  
  static void myMethod(String fname, int age) {
    
    System.out.println(fname + " is " + age);
  }

  public static void main(String[] args) {
    
    myMethod("Naim", 5);
    myMethod("Afif", 8);
    myMethod("Naimur", 31);
  }
}
