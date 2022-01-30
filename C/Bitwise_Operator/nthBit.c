#include<stdio.h>

int main()
{
    int number, n , bitStatus;

    printf("Enter any number: ");
    scanf("%d",&number);
    printf("\n");

    printf("Enter nth Bit to check (0-31): ");
    scanf("%d",&n);

    /* Right shift num, n times and perform bitwise AND with 1 */
    bitStatus = (number << n) & 1;

    printf("The %d bit is set to %d", n, bitStatus);

    return 0;
}