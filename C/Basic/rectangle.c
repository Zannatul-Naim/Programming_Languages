#include<stdio.h>

int main()
{
    float len, bre, area;
    printf("Enter Length of Rectangle: ");
    scanf("%f", &len);
    printf("Enter breadth of Rectangle: ");
    scanf("%f", &bre);
    area = len * bre;
    float perimeter = 2 * (len + bre);
    printf("\nPerimeter = %0.2f", perimeter);
    printf("\nArea = %0.2f", area);
    return 0;
}
