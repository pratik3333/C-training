// Write a program input the 5 values in array and reverse it.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i,j,temp;
    printf("Enter the five values of array:\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nDisplay array before sorting");
    for ( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);

        for ( i = 0; i < 5; i++)
        {
            for ( j=(i+1); i < 5; i++)
            {
                if (a[i]>a[i])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                
            }
            
        }
        printf("\n Display the array after sorting");
        for ( i = 0; i <5; i++)
        {
            printf(" %d",a[i]);
        }
        
    }
    
    return 0;
}
