#include<stdio.h>

int main()
{
    int a, b, c, small;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    
    small = (a < b) ? (a < c ? a : c) : (b < c ? b : c);   // for finding the smallest value.
    
    printf("\nSmallest value is = %d", small);
    return 0;
}
