#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i,j,temp;
    printf("Enter the five values in array: ");

    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Display the array before sorting:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
        for ( i = 0; i <5; i++)
        {
            for ( j =(i+1); j<5; j++)
            {
                if (a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                
            }
            
        }
        printf("\n Display the array after sorting: ");
        for ( i = 0; i < 5; i++)
        {
            printf("%d",a[i]);
        }
        
    }
    
    
    return 0;
}
