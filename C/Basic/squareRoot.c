#include<stdio.h>
#include<math.h>
int main()
{
   int number;
   double result;

   printf("Enter any integer number: ");
   scanf("%d", &number);

   result = sqrt(number);
   printf("Square root value = %.2lf", result);

   return 0;
}
