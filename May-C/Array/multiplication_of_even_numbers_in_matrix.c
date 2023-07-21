#include<stdio.h>
void main()
{
    int i,j,a[3][3];
    printf("\nEnter the matrix value: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("\nDisplay matrix Before opration\n");
    for ( i = 0; i <3; i++)
    {

        for ( j = 0; j <3; j++)

        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    

    printf("\n\nAfter opration\n");
    
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            if (a[i][j]%2==0)
            {
                printf("%d\t",a[i][j]*2);
            }
            else
            {
                printf("%d\t",a[i][j]);
            }
            
            
        }
        printf("\n");
    }
    

}