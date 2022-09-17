#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number: ");
    scanf("%d",&no);

    if((no%7==0)&&(no%3==0))
    {
        printf("%d is divisible by both 7 and 3",no);
    }
    else
    {
        printf("%d is not divisible by both 7 and 3",no);
    }
    
    return 0;
}