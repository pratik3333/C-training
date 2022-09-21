// Write a C program to input principle, time and rate (P, T, R) from user and find 
// Simple Interest. How to calculate simple interest in C programming. Logic to 
// find simple interest in C program.
// Example
// Input
// Enter principle: 1200
// Enter time: 2
// Enter rate: 5.4
// Output
// Simple Interest = 129.600006


// Simple Interest formula
//        SI = (P*T*R)/100

// where
// P is the principle amount
// T is the time 
// R is the rate

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c;
    float simpleinterest;

    printf("Enter principle: ");
    scanf("%f",&a);

    printf("Enter time: ");
    scanf("%f",&b);

    printf("Enter rate: ");
    scanf("%f",&c);

    simpleinterest=((a*b*c)/100);
    printf("Simple interest= %f",simpleinterest);


    return 0;
}
