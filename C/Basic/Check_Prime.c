#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter a number to check prime or not: ");
    scanf("%d", &n);
    
    bool flag = true;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0) {
            flag = false;
            break;
        }
    }
    if(flag && n != 1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}
