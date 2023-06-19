// Write a c program to find sum of all prime numbers between 1 to n.

#include <stdio.h>
#include <conio.h>
void main()
{
    int no, i, count = 0,j,flag,sum;
    printf("Enter the number: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {   flag=0;
        for (j = 2; j <= i/2; j++)
        {
            
            if (i % j == 0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            {

                printf("\n%d",i);
            }
    }
}