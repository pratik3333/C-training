#include<stdio.h>

void main()
{
    int no1,no2,op;
    printf("Enter the two number: ");
    scanf("%d%d",&no1,&no2);
    


    printf("Enter 1 for calculating area of circle: ");
    printf("Enter 2 for calculating area of rectangle: ");
    printf("Enter 3 for calculating area of triangle: ");
    printf("Enter 4 for calculating area of square: ");

    switch (op)
    {
    case '1':
        printf("%d",3.14*no1*no2);
        
        break;
    
    default:
    printf("Invalid Input");
        break;
    }





}