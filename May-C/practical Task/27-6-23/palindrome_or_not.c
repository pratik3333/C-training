// WAP to check given number is palindrome or not
#include<stdio.h>
void main()
{
    long int no,temp,rem,rev=0;
    printf("Enter the number: ");
    scanf("%ld",&no);

    temp=no;
    while (no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
        
    }
    
    if (temp==rev)
    {
        printf("\nGiven number is palindrome number.");
    }
    else
    {
        printf("\nGiven number is not palindrome number.");
    }
    
}