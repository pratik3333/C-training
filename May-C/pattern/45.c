
//fabonacci pattern 


#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a=0,b=1,sum=0;
    for ( i = 1; i <=5; i++)
    {
        a=0,b=1,sum=0;
        for ( j = 1; j <=5; j++)
        {
            if (j<=i)
            {
                a=b;
                b=sum;
                printf("\t%d",sum);
                sum=a+b;
               
                
            }
            
        }
        printf("\n");
    }
    

}