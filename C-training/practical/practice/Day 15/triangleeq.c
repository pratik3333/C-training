#include <stdio.h>
int main(int argc, char const *argv[])
{
    int side1,side2,side3;
    printf("Enter the first side of triangle: ");
    scanf("%d",&side1);

    printf("Enter the second side of triangle: ");
    scanf("%d",&side2);

    printf("Enter the third side of triangle: ");
    scanf("%d",&side3);

    if (side1==side2 && side2==side3)
    {
        printf("\nTriangle is Equilateral");
    }
    else if (side1==side2||side2==side3||side3==side1)
    {
        printf("\nTriangle is isoscale");
    }
    else
    {
        printf("\nTriangle is Scalene");
    }
    
    
    return 0;
}
