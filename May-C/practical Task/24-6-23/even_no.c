// WAP to print all even numbers between 1 to 10 using while loop
#include<stdio.h>
void main()
{
    int i;
    i=1;
    while (i<=10)
    {
        if (i%2==0)
        {
            printf("\n%d",i);
        }
        
        i++;
    }
    
}