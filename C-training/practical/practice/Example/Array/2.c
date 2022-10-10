#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i,value;
    printf("Enter the values in array");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the value for search");
    scanf("%d",&value);
    int m=0;
    for ( i = 0; i <5; i++)
    {
        if (a[i]==value)
        {
            m=1;
            break;
        }
        
    }
    if (a)
    {
        printf("Value found");
    }else{
        printf("Value not found");
    }
    
    
    return 0;
}
