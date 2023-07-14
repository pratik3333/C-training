#include<stdio.h>
void main()
{
    int i,j,a=0,b=1,sum=0,k=1;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=9; j++)
        {
            if (j>=6-i && j<=4+i && k )
            {
                if (j==5 && i==1)
                {
                    printf("\t%d",a);
                }
                else if(j==4 && i==2)
                {
                    printf("\t%d",b);
                    k=0;
                }
                
                else
                {
                    sum=a+b;
                    a=b;
                    b=sum;
                    printf("\t%d",sum);
                    k=0;
                    
                }
                
            }
            else
            {
                printf("\t ");
                k=1;
            }
            
        }
        printf("\n");
    }
    
}

        //                                 0                                
        //                         1               1
        //                 2               3               5
        //         8               13              21              34
        // 55              89              144             233             377