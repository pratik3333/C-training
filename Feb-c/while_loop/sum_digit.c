// write a program to input any number and calculate sum of all its digit.
// 12345=1+2+3+4+5=15

#include<stdio.h>
int main()
{
    int no,sum=0,r;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (no>0)
    {
        r=no%10;
        sum=sum+r;
        no=no/10;
    }
    
    printf("Sum of all digit is: %d",sum);
    return 0;
}
