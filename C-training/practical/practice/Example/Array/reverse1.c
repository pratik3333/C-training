// W.A.P. to insert 5 elements into array and print it in reverse order.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i,m,l,start,end,temp;
    printf("Enter the five values in array: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    l=sizeof(a)/sizeof(a[0]);
    m=l/2;
    end=(l-1);
    
    for ( start = 0; start<m; start++)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        end--;
    }
    printf("\n array after sorting");
    for ( i = 0; i <5; i++)
    {
        printf(" %d",a[i]);
    }
    
    

    
    return 0;
}
