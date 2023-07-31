#include<stdio.h>
void main()
{
    void calSum(no); //Declaration
    int no;
    printf("\nEnter the number\n");
    scanf("%d",&no);
    
    calSum(no);  //Calling
}

void calSum(no)  //Defination
{
    int sum=0,i;
    for ( i = 1; i <=no; i++)
    {
        sum=sum+i;
        printf("%d +",i);
    }

    printf("\n sum of all natural numbers upto %d is %d",no,sum);
    
}