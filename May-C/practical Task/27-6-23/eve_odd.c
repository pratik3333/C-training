// WAP to print even and odd numbers up to n

#include<stdio.h>
void main()
{
    int no,i;
    printf("Enter the number: ");
    scanf("%d",&no);
    i=2;
    printf("Even numbers are: \n");
    while (i<=no)
    {
        if (i%2==0)
        {
            printf("\t%d",i);
        }
        i++;
        
    }

    printf("\nOdd numbers are: \n");
    i=2;
    while (i<=no)
    {
        if (i%2==1)
        {
            printf("\t%d",i);
        }
        i++;
    }
    
    
}