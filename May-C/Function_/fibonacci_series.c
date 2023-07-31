#include<stdio.h>
void main()
{
    void printfibonacci(int limit);  //Declaration
    int limit;
    printf("\nEnter the limit\n");
    scanf("%d",&limit);

    printfibonacci(limit); //Calling

}

void printfibonacci(limit)
{
    int a=0,b=1,sum,i;
    printf("\t%d",a);
    printf("\t%d",b);
    for ( i = 1; i <limit-1; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("\t%d",sum);
    }
    
}