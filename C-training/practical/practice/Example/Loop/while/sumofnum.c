// write a program to calculate sum of all numbers up to n

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,no;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&no);
    i=0;
    while (i<=no)
    {
        sum=sum+i;
        i++;
        
    }
    
    printf("sum is %d\n",sum);

    return 0;
}
