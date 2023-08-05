#include<stdio.h>
int i,j,temp;

int getarray(int x[])
{
    for ( i = 0; i <5; i++)
    {
        for ( j =i+1 ; j <5; j++)
        {
            if (x[i]<x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
            
        }
        
    }
}


void main()
{
    int a[5];
    printf("Enter five values of array: \n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nDisplay array values: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }

    getarray(a);
    printf("\nAfter operation call by reference\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }

}