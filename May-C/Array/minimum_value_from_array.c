#include<stdio.h>
void main()
{
    int i,a[5],min,len;
    printf("Enter the five vlaues in array: ");
    len=sizeof(a)/sizeof(a[i]);
    for ( i = 0; i <len; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nDisplay the array value: ");
    for ( i = 0; i <len; i++)
    {
        printf("\t%d",a[i]);
    }
    min=a[0];

    for ( i = 1; i <len; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
        
    }
    printf("\n Minimum value is %d",min);
}