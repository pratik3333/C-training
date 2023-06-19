#include<stdio.h>
void main()
{
    int no,rem;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (no!=0)
    {
        rem=no%10;
        printf("%d",rem);
        no=no/10;

    }
    
}