// Example2
// Write a C program to check whether a triangle is valid or not if angles are 
// given using if else. How to check whether a triangle can be formed or not, if its 
// angles are given using if else in C programming. Logic to check triangle 
// validity if angles are given in C program.
// Example
// Input
// Input first angle: 60
// Input second angle: 30
// Input third angle: 90
// Output
// The triangle is valid


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int angle1,angle2,angle3;
    printf("Input first angle: ");
    scanf("%d",&angle1);

    printf("Input second angle: ");
    scanf("%d",&angle2);

    printf("Input third angle: ");
    scanf("%d",&angle3);

    if (angle1+angle2+angle3==180)
    {
        printf("\nTriangle is valid");
    }
    else
    {
        printf("\nTriangle is invalid");
    }
    
    return 0;
}
