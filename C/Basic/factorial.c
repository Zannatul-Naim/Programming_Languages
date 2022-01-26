#include<stdio.h>

int factorial(int n)
{
   //Factorial of 0 is 1 
   if(n==0)
      return(1);
 
   //Function calling itself: recursion
   return(n*factorial(n-1));
}
int main()
{
   int num, fact;
   printf("Enter a positive integer number: ");
   scanf("%d",&num);
 
   //Calling our user defined function
   if(n >= 0)
   {
      fact = factorial(num);
       //Displaying factorial of input number
      printf("\nfactorial of %d is: %d", num, fact);
  
   }
   else 
      printf("Invalid input");
   
   /*
        without recursion
        
        fact = 1;
        for(int i  = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d is: %d", num, fact);
   
   */
 
  
   return 0;
}
