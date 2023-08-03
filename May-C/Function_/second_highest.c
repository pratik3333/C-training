#include<stdio.h>
int main()
{
    int a[5];
    int secondhighest(int[]);
    int getsecond;

    printf("\n\nEnter the array values\n");
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    getsecond=secondhighest(a);
    printf("\nSecond highest value is %d",getsecond);


    return 0;
}

int secondhighest(int m[])
{
    int i,temp,j;
    for ( i = 0; i <5; i++)
    {
        for (j =i+1; j< 5; j++)
        {
            if (m[i]>m[j])
            {
                temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
            
        }
        
    }
    for ( i = 4; i>=0; i--)
    {
        if (m[i]!=m[i-1])
        {
            //printf("\nSecond highest value is %d",m[i-1]);
            return m[i-1];
            break;
        }
        
    }
    
    
}