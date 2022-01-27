#include<stdio.h>
int main()
{
  int num;

  printf("Enter number: ");
  scanf("%d", &num);

  printf("Factors of %d are:\n", num);

  for(int i = 1; i <= num / 2; i++)
  {
    if(num % i == 0)
    printf("%d  ", i);
  }

  return 0;
}
