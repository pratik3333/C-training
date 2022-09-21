// Example 8 
// Write a C program to input principle (amount), time and rate (P, T, R) and find 
// Compound Interest. How to calculate compound interest in C programming. 
// Logic to calculate compound interest in C program.
// Example
// Input
// Enter principle (amount): 1200
// Enter time: 2
// Enter rate: 5.4
// Output
// Compound Interest = 1333.099243
// Compound Interest formula

//          CI=p(1+(R/100))^T

// Formula to calculate compound interest annually is given by.
// Where,
// P is principle amount
// R is the rate and
// T is the time span

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c;
    float CI;

    printf("Enter principle (amount): ");
    scanf("%f",&a);

    printf("Enter Time: ");
    scanf("%f",&b);

    printf("Enter rate: ");
    scanf("%f",&c);

    //    CI=p(1+(R/100))^T

     CI=(a(1+(c/100))^b);
     printf("Compound Interest = %f",CI);
                
    return 0;
}
