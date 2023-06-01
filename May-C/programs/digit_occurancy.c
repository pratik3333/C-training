#include<stdio.h>
#include<conio.h>
void main()
{
    int no,rem,n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
    printf("\nEnter the number: ");
    scanf("%d",&no);

    while (no!=0)
    {
        rem=no%10;
        switch (rem)
        {
        case0:
              n0++;
            break;
        
        case 1:
             n1++;
            break;

        case 2:
              n2++;
            break;
        
        case 3:
             n3++;
            break;

        case 4:
              n4++;
            break;
        
        case 5:
             n5++;
            break;

        case 6:
              n6++;
            break;
        
        case 7:
             n7++;
            break;   

        case 8:
              n8++;
            break;
        
        case 9:
             n9++;
            break;     

        }
     no=no/10;
    }

    if (n0>0)
    {
        printf("\n 0------%d times",n0);
    }

    if (n1>0)
    {
        printf("\n 1------%d times",n1);
    }
    if (n2>0)
    {
        printf("\n 2------%d times",n2);
    }

    if (n3>0)
    {
        printf("\n 3------%d times",n3);
    }

    if (n4>0)
    {
        printf("\n 4------%d times",n4);
    }
    if (n5>0)
    {
        printf("\n 5------%d times",n5);
    }

    if (n6>0)
    {
        printf("\n 6------%d times",n6);
    }

    if (n7>0)
    {
        printf("\n 7------%d times",n7);
    }
    if (n8>0)
    {
        printf("\n 8------%d times",n8);
    }
    
    if (n9>0)
    {
        printf("\n 9------%d times",n9);
    }
    
    

}