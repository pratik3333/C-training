#include<stdio.h>
void main(){
    int a[100],i,j,n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("The given elements are: ");
    for ( i = 0,j=(n/2)-1; i <n/4; i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
    for ( i = 0; i <n; i++)
    {
        printf("\na[%d] = %d ",i,a[i]);
    }
    
}