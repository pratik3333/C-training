#include<stdio.h>
int i=1,sum=0;
int perfect(no)
{
    if(i<=no/2)
    {
        if (no%i==0)
        {
            sum = sum+i;
        }
         i++;
           return perfect(no);
    }
    if (no==sum)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}


void main()
{
    int no;
    printf("\nEnter the number:  ");
    scanf("%d",&no);

    int result=perfect(no);
    if (result==1)
    {
        printf("\nNumber is perfect number\n");
    }
    else
    {
        printf("\nNumber is not perfect number\n");
    }
    
    
}