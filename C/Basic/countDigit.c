/*

#include<stdio.h>
 int main()
 {
     int number, count = 0;

     printf("Enter a number: ");
     scanf("%d", &number);

     while (number != 0)
     {
       count++;
       number /= 10;
     }

     printf("Number of digits =  %d\n", count);

     return 0;
 }


*/

 #include<stdio.h>
 int numberOfDigits(int n)
 {
   return n==0? 0 : 1+numberOfDigits(n/10);
 }
 int main()
 {
     int number, sum;

     printf("Enter a number: ");
     scanf("%d",&number);

     sum = numberOfDigits(number);

     printf("Number of digits =  %d\n",sum);

     return 0;
 }
