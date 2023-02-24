// write a c program to add,substract,multiply,divide two numbers using call by reference

#include <stdio.h>
#include <conio.h>

void main()
{
    void operation(int*,int*);
    int fno;
    int sno;

     printf("Enter the first number: \n");
    scanf("%d",&fno);

    printf("Enter the second number: \n");
    scanf("%d",&sno);

    operation(&fno,&sno);

    getch();
}

void operation(int *a,int *b){
    printf("addition is %d",*a+*b);
    // printf("substraction is %d",*a-*b);
    // printf("multiplicatin is %d",*a**b);
    // printf("division is %d",*a/*b);
}

   
