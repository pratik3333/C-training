// write a program to input a number and reverse it 
#include <stdio.h>
int main()
{
    int no,r;
    printf("Enter the number: ");
    scanf("%d",&no);
    printf("%d\n",no);

    while (no>0)
    {
        r=no%10;
        printf("%d ",r);

        no=no/10;

    }
    
    return 0;
}