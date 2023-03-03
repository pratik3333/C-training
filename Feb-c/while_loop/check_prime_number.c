// write a program to check number is prime number or not.

#include <stdio.h>
int main()
{
    int no,i,m,flag;
    printf("Enter the number: ");
    scanf("%d",&no);

    
    flag=1;
     for(i=2;i<=no/2;i++)
     {
        if (no%i==0)
        {
            flag=0;
            break;
           
        }
        
   }
   if(flag==1 && no>1)
   {
     printf("Number is prime number");
   }
   else{
    printf("Number is not prime number");
   }
    return 0;
}