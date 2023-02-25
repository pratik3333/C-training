#include<stdio.h>
int main()
{
    int i,no,count=0;

    printf("Enter the number: ");
    scanf("%d",&no);

    for ( i = 1; i<=no; i++)
    {
        if (no%i==0)
        {
            count++;
            // printf("count%d",count);
        }
        
    }

    if(count==2){
        printf("Prime number.");
    }
    else
    printf("Not prime number.");
    
    return 0;
}