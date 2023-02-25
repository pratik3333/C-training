// Write a C program to find maximum between two numbers 
// using switch case.

#include <stdio.h>

int main(){

    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    switch(num1>num2)
    {
    case 1:
        printf("%d is greater",num1);
        break;
    case 0:
    if (num1==num2)
    {
        printf("Equal");
    }
    else
    printf("%d is greater",num2);
    break;
    
    default:
    printf("Invalid Input");
        break;
    }

}