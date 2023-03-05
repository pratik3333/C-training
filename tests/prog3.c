#include<stdio.h>

void main()
{
    int i,j;
    char ch='A';
    // we take the i for outer loop
    for ( i = 1; i <=5; i++)
    {
        ch='A';
        // we take the j for inner loop
        for ( j = 1; j <=i; j++)
        {
            // we put the % condition for row
            if (i%2==1)
            {
                printf("%d",j);
            }
            else
            {
                printf("%c",ch);
                // we increasing the character one by one
                ch++;
            }
            
           
        }
        // we printing the new line.
        printf("\n");
    }
    
}