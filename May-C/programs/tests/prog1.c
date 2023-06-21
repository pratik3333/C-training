#include<stdio.h>
int main()
{
    int i,no,count=0;

    // we are taking the input from user
    printf("Enter the number: ");
    scanf("%d",&no);

    for ( i = 1; i<=no; i++)
    {
        // we are puting the condition here
        if (no%i==0)
        {
            count++;
        }   
    }
    // we put this condition because if our count is 2 then our code will
    //  print number is prime number or not.
    if(count==2){
        printf("Prime number.");
    }
    else
    printf("Not prime number.");
    
    return 0;
}