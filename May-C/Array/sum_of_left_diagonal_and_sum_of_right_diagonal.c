#include<stdio.h>
void main()
{
    int i,j,a[3][3],sum=0,sum1=0;
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
     for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           if (i==j)
           {
            sum=sum+a[i][j];
           }
           
           if (j==(2-i))
           {
            sum1=sum1+a[i][j];
           }
           
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of left diagonal is  %d",sum);
    printf("\nSum of right diagonal is  %d",sum1);
}