class ReverseNumber
{
   public static void main(String args[])
   {
      int number = 123456789;
     System.out.println("The number is: " + number);
      int reversenum = 0;
      while( num != 0 )
      {
          reversenum = reversenum * 10;
          reversenum = reversenum + num % 10;
          number = number / 10;
      }

      System.out.println("Reverse number is: " + reversenum);
   }
}
