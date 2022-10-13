// missing element

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,a[5],diff;
    printf("Enter the values in array:\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Missing element is\n");
    for ( i = 0; i < 5; i++)
    {
        int diff=a[i+1]-a[i];
        if (diff>1)
        {
            for ( j =a[i]; j <(a[i+1]-1);)
            {
                printf(" %d",++j);
            }        
            
        }
        
    }
    
    
    return 0;
}
