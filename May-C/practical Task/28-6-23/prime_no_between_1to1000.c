#include<stdio.h>
void main()
{
    int no,i,j;
    
    for ( i = 1; i <=1000; i++)
    {
        int count=0;
        for ( j = 1; j <=i; j++)
        {
            if (i%j==0)
            {
                count++;
            }
            
        }
        if (count==2)
        {
            printf("\n%d",i);
        }
        
        
    }
    
}