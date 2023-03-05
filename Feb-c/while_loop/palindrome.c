// check the number is palindrome number or not

#include<stdio.h>
void main()
{
    int no,rem,sum=0,temp;

    printf("Enter the number: ");
    scanf("%d",&no);
    temp=no;

    while (no>0)
    {
        rem=no%10;
        sum=(sum*10)+rem;
        no=no/10;

    }
    if (temp==sum)
        printf("Number is palindrome number.");
    
    else
        printf("Number is not palindrome number.");
    
    return 0;
}