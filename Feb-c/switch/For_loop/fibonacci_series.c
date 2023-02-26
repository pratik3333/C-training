#include<stdio.h>
int main()
{
    int no,a=0,b=1,c;
    printf("Enter the number: ");
    scanf("%d",&no);

    for (int i=1; i <= no; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;

}