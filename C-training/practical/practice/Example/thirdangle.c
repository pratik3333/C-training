// Example4:
// Write a C Program to input two angles from user and find third angle of the 
// triangle. How to find all angles of a triangle if two angles are given by user 
// using C programming. C program to calculate the third angle of a triangle if 
// two angles are given.
// ExampleInput
// Enter first angle: 60
// Enter second angle: 80
// Output
// Third angle = 40


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter first angle: ");
    scanf("%d",&a);

    printf("Enter second angle: ");
    scanf("%d",&b);

    c=180-(a+b);
    printf("\nThird angle of triangle=%d",c);
    

    return 0;
}
