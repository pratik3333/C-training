//WAP to enter the 10 element array and print the occurence of every element?

#include<stdio.h>
void main()
{
    int a[10],i,j,temp,count=1;
    printf("Enter the 10 elements of array: ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n Display the array: ");
    for ( i = 0; i <10; i++)
    {
        printf("\t%d",a[i]);
    }
    
    for ( i = 0; i <10; i++)
    {
        for ( j =(i+1); j <10; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }     
    }
    printf("\nDisplay Ascending order array: \n");
    for ( i = 0; i <10; i++)
    {
        printf("\t%d",a[i]);     
    }



    printf("\n occurence of every element: \n");
    for ( i = 0; i < 10; i++)
    {
        if (a[i]==a[i+1])
        {
            count++;
        }
        else
        {
            printf("\n\t%d----->%d\n",a[i],count);
            count=1;
        }
        
        
    }
    
    
    
}