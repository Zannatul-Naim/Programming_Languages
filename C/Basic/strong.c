/***

Strong Number:- The sum of the factorial of individual digits of a number is equal to the same number. Sometimes the Strong number.
Example:-
145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
So, 145 is a strong number.

234 = 2! + 3! + 4! = 2 + 6 + 24 = 32
So, 234 is not a strong number.

40585 = 4! + 0! + 5! + 8! + 5! = 24 + 1 + 120 + 40320 + 120 = 40585
So, 40585 is a strong number.

***/

#include<stdio.h>
int main()
{
     int number, tempvariable, remainder, i, factorial, sum=0;

     printf("Enter number: ");
     scanf("%d",&number);

     tempvariable = number;

     while( number!=0 )
     {
         factorial = 1;  //every time factorial initialize with 1
         remainder = number%10;

         for(i=1; i<=remainder; i++)
         {
             factorial *= i; //factorial=factorial * i
         }

         sum += factorial;  //sum= sum+factorial
         number /= 10;  //numbar=numbar/10
     }

     if( tempvariable == sum )
         printf("%d is a strong number.\n",tempvariable);
     else
         printf("%d is not a strong number.\n",tempvariable);

     return 0;
}
