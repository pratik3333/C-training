#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=6; i++)
    {
        char x='A';
        for ( j = 1; j <=6; j++)
        {
            if (j<=7-i)
            {
                printf("\t%c",i+j+63);
                
            }
            else
            {
                printf("\t%c",x);
                x++;

            }
        
        }
        printf("\n");
    }
    

}
        // A       B       C       D       E       F
        // B       C       D       E       F       A
        // C       D       E       F       A       B
        // D       E       F       A       B       C
        // E       F       A       B       C       D
        // F       A       B       C       D       E