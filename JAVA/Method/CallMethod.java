public class CallMethod {
  static void myMethod(int i) {
    
    System.out.println("Calling Method! " + i + " times" );
  }

  public static void main(String[] args) {
    myMethod(1);
    myMethod(2);
    myMethod(3);
  }
}
