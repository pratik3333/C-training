// write a c program to print array elements from last to first

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] ={1,2,3,4,5};
    int temp,start,end,l;
    
    int l=sizeof(a)/sizeof(a[0]);
    int m=l/2;
    int end=(l-1);

    for ( start=0; start<m; start++);

    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        end--;

    }


    return 0;
}
