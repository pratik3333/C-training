#include<stdio.h>
void main()
{
    int a[5],*b[5],i,selement,flag=0;
    printf("\nEnter five elements in array: \n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay array values\n");
    for ( i = 0; i <5; i++)
    {
        printf("%d\t",a[i]);
    }
    
    for ( i = 0; i <5; i++)
    {
        b[i]=&a[i];
    }
    
    printf("\nEnter search element:  \n");
    scanf("%d",&selement);

    for ( i = 0; i <5; i++)
    {
        if (selement==*b[i])
        {
            flag=1;
            break;
        }
        
    }
    if (flag)
    {
        printf("\nElement found");
    }
    else
    {
        printf("\nElement not found");
    }
    
    
}