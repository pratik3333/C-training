// Example5
// Write a C program to find all roots of a quadratic equation using if else. How to 
// find all roots of a quadratic equation using if else in C programming. Logic to 
// find roots of quadratic equation in C programming.
// Example
// Input
// Input a: 8
// Input b: -4
// Input c: -2
// Output
// Root1: 0.80
// Root2: -0.30

#include<stdio.h>
#include<math.h>
int main(){
   float a,b,c;
   float root1=(-b-sqrt(b*b-4*a*c))/(2*a);
   float root2=(sqrt(b*b-4*a*c))/(2*a);
   scanf("%f %f %f",&a,&b,&c);
   printf("%f %f\n",root1,root2);
   return 0; 
}