#include<stdio.h>
#include<math.h>
int main()
{
  double number;
  double result;

  printf("Enter a number: ");
  scanf("%lf", &number);

  result = fabs(number);
  printf("Absolute value = %lf\n", result);

  return 0;
}
