// print first 10 elements from fibonacci series

#include<stdio.h>
int main()
{
    int no,a=0,b=1,c;

    // taking for loop because we want to eterate for loop upto 10
    for (int i = 0; i <= 10; i++)
    {
        c=a+b;
        // printing the fabonacci series
        printf("%d ",c);
        a=b;
        b=c;

    }
    return 0;
}