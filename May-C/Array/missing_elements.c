#include<stdio.h>
void main()
{
    int a[5],i,j,temp,len;
    len=sizeof(a)/sizeof(a[0]);
    printf("Enter five values of array: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    
    for ( i = 0; i <5; i++)
    {
       for ( j = (i+1); j <5; j++)
       {
         if (a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
         
       }
       
    }
    
    printf("\nAssending array: \n");
    for ( i = 0; i <5; i++)
    {
        printf("%d\t",a[i]);
    }
    
    // missing elements
    printf("\n\nPrinting missing elements\n");
    
}