class ReverseNumber
{
   public static void main(String args[])
   {
      int number = 123456789;
     System.out.println("The number is: " + number);
      int reverseNum = 0;
      while( number != 0 )
      {
          reverseNum = reverseNum * 10;
          reverseNum = reversenum + num % 10;
          number = number / 10;
      }

      System.out.println("Reverse number is: " + reverseNum);
   }
}
