// Example3
// Write a C program to input sides of a triangle and check whether a triangle is 
// equilateral, scalene or isosceles triangle using if else. How to check whether a 
// triangle is equilateral, scalene or isosceles triangle in C programming. Logic to 
// classify triangles as equilateral, scalene or isosceles triangle if sides are given 
// in C program.
// Example
// Input
// Input first side: 30
// Input second side: 30
// Input third side: 30
// Output
Triangle is equilateral triangle


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
