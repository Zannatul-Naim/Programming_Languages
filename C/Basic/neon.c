  /***
  
  Neon Number
If the sum of digits of the square of the number is equal to the same number, then the number is called Neon number.
Example:- 9
Square of 9 = 92= 81
Sum of the digits of the square = 8+1= 9
So, 9 is a Neon number.

Another Example:- 1
Square of 1= 12= 1
Sum of the digits of the square = 1
S0, 1 is a Neon number.

Another Example :- 5
Square of 5 = 52 = 25
Sum of the digits of the square = 2+5 = 7
Here, 5 is not equal to 7.
So, 5 is not a Neon number.


***/


#include<stdio.h>
int main()
{

    int n, sqr, rem, sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    sqr = n*n; //we can also use pow()

    while(sqr!=0)
    {
        rem = sqr%10;
        sum += rem; //sum = sum + rem
        sqr /= 10;  //sqr = sqr / 10
    }

    if(sum==n)
        printf("%d is a neon number.\n",n);
    else
        printf("%d is NOT a neon number.\n",n);

    return 0;
}
