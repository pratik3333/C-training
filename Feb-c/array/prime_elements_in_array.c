// Write a program to create array of size 10 insert elements in it.
// and display all prime elements from array.

#include <stdio.h>
void main()
{
    int a[5], i, j, flag,count=0;
    printf("Enter the 10 elements of array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nDisplay array elements: \n");
    for (i = 0; i < 5; i++)
    {
        printf("\t%d", a[i]);
    }
     
     
    printf("\nPrime numbers of given aaray are: \n");
    for (i = 0; i < 5; i++)
    {
        

        
        
        // flag = 0;
        // for (int j = 2; j < a[i]; j++)
        // {
        //     if (a[i] % j == 0)
        //     {
        //         flag = 1;
        //         break;
        //     }
        // }
        // if (flag == 0)
        // {
        //     printf("\t%d", a[i]);
        // }
         count=0;
        for ( j = 1; j <=a[i]; j++)
        { 
           if (a[i]%j==0)
                     {
                count++;
            }
            
        }
       if (count==2)
            {
                printf("\t%d", a[i]);
            }
        
    }
     
}