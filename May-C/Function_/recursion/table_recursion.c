#include<stdio.h>
int count=1;
void main()
{
    void table(int);
    int no;
    printf("\nEnter the number ");
    scanf("%d",&no);

    table(no);
}

void table(int x)
{
    if (count<=10)
    {
        printf("%d\n",x*count);
        ++count;
        table(x);
    }

    
}