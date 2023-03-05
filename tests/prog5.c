#include<stdio.h>
int main()
{
    int no,rem,sum=0,temp;

    // we are taking the number from the user
    printf("Enter the number: ");
    scanf("%d",&no);
    
    // we are storing the number in temp
    temp=no;


    while(no>0)
    {
        rem=no%10;
        sum=(sum*10)+rem;
        no=no/10;
    }
    // we put the condition here.
    if (temp==sum)
        printf("Number is palindrome number");
    else
        printf("Number is not palindrome number");
     
    return 0;

}