// Write a c program to find sum of all prime numbers between 1 to n.

#include <stdio.h>
#include <conio.h>
void main()
{
    int no, i, count = 0,sum,j,primesum=0;
    printf("Enter the number: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {  count=0;
        for (j = 1; j <= i; j++)
        {
            
            if (i % j == 0)
            {
                count++;
            }
        }
      if (count==2)
      {
        primesum=primesum+i;

      }
      
    }
    printf("Sum of prime numbers upto n is: %d",primesum);
}