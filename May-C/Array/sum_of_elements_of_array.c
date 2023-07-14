#include<stdio.h>
void main()
{
    int a[5],i,sum=0,len;

    len=sizeof(a)/sizeof(a[0]);
    printf("\nEnter the five elements of array: \n");
    for ( i = 0; i <len; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Display the array value:\n");
    for ( i = 0; i <len; i++)
    {
        printf("\t%d",a[i]);
    }
    
    for ( i = 0; i <len; i++)
    {
        sum=sum+a[i];
    }
    
    printf("\n Sum of array value is: %d",sum);
}