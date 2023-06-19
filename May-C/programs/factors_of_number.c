#include<stdio.h>
void main()
{
    int no,i;
    printf("Enter the number: ");
    scanf("%d",&no);

    for ( i = 1; i <=no; i++)
    {
        if (i%2==0)
        {
            printf("\t%d",i);
        }
        
    }
    
}