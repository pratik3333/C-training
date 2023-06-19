// WAP input number and check number is a duck number or not 

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,no,flag=1;
    printf("Enter the number: ");
    scanf("%d",&no);

    for ( i = 1; i <=no; i++)
    {
        j=no%10;
        if (j==0)
        {
            flag=0;
        }
        no=no/10;
    }
    if (flag==0)
    {
        printf("Number is duck number.");
    }
    else
    {
        printf("Number is not duck number.");
    }
    


}
