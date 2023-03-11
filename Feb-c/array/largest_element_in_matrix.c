// WAP to 3*3 matrix find the largest element and display it's position.


#include<stdio.h>
void main()
{
    int a[3][3],max,i,j,k;

    printf("Enter the matrix values: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Display the matrix: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    max=a[0][0];
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            if (max<a[i][j])
            {
                max=a[i][j];
            }
            
        }
        
    }
    printf("Maximum value of the given matrix is: %d",max);


}