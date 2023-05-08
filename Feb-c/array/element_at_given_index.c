#include<stdio.h>
void main()
{
    int array[100],position,value,i,n;

    printf("Enter the number of elements in index");
    scanf("%d",&n);

    printf("Enter the %d elements:\n",n);
    for ( i = 0; i <=n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("Location\n");
    scanf("%d",&position);

    printf("Enter the value to insert: \n");
    scanf("%d",&value);

    for ( i = n-1; i >=position-1; i--)
    
        array[i+1]=array[i];

        array[position-1]=value;
    printf("resultant array is \n");
    for ( i = 0; i <=n; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
    
}