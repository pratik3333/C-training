// WAP to 3*3 matrix find the repeatative element and display its position
#include<stdio.h>
void main()
{
    int a[3][3],i,j,count=0,repeat;

    printf("Enter the matrix values: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    printf("\nDisplay the matrix: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    repeat=a[0][0];
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            
            if (repeat==a[i][j])
            {
            
                count++;
            }
            
        }
        
    }
    printf("repeatative element is %d",repeat);
    printf("repeatative element is %d",count);
}