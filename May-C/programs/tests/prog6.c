#include<stdio.h>

void main()
{
    int i,j;

    // we take the this loop for rows
    for ( i = 1; i <=5; i++)
    {
        // we take the this loop for column
        for ( j = 1; j <=6; j++)
        {
            // we put this condition because our pattern generating from this .
            if (i==1 || i==5 || j==1 || j==6)
            {
                printf("*");
            }
            else
            {
                // this statement print the white space.
                printf(" ");
            }
            
            
        }
        // this statement print the new line.
        printf("\n");
    }
    
}