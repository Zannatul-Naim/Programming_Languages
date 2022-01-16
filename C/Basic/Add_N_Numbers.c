#include<stdio.h>

int main()
{
    int i, n, num, sum = 0;
    printf("Enter the value of n that is how many numbers you want to add : ");
    scanf("%d", &n);
    printf("\nEnter %d numbers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("\nSum of all %d numbers = %d", n, sum);
    return 0;
}
