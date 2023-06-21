#include<stdio.h>

void main()
{
    int i,j,flag;
    // we take this for loop rows
    for ( i = 1; i <=6; i++)
    {
        flag=1;
        // we take this for loop for column
        for ( j = 1; j <=12; j++)
        {
            // we put this condition because our pattern generating from this condition
            if ( j>=i+1 && j<=13-i && flag)
            {
                // we print the *
                printf("*");
                flag=0;
            }
            else
            {
                // if that condition is false then our else statement will print the white space.
                printf(" ");
                flag=1;
            }
            
            
        }
        // this printf statement for new line.
        printf("\n");
    }
    
}