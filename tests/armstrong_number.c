#include <stdio.h>
void main()
{
    int i, j, no, n, sum, count, temp, rem, p,k;
    printf("Enter the number: ");
    scanf("%d", &k);
    for (no = 10; no <= k; no++)
    {
         count = 0, temp = no,sum=0;

        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }
         temp=no;

        while (temp > 0)
        {
            rem = temp % 10;
              temp = temp / 10;
            p = 1, i = 1;
            while (i <= count)
            {
                p = p * rem; 
                i++;
            }
              sum = sum + p;       
        }   
          if (no == sum)
        {
            printf("\n -->%d", no);
        }
    }  
}