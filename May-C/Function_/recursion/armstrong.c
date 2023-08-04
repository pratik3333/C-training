#include<stdio.h>
#include<math.h>

int count=0,x,sum=0,no,temp;
  int Count(int no)
  {
    if(no!=0){
        no=no/10;
        count++;
        Count(no);
    }
  }
int armstrong( int no)
{
    printf("\nCount=%d",count);
  
    if(no!=0)
    {
        int rem=no%10;
        printf("\nRem=%d",rem);
        printf("\nPower=%f",pow(rem,count));
        sum = sum+pow(rem,count);
         printf("\nSum=%d",sum);
         no=no/10;
          printf("\nNum=%d",no);
         armstrong(no);
        
    }
    else{
   
    if (temp==sum)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    }
    
}


void main()
{
   // int no;
    printf("\nEnter the number: ");
    scanf("%d",&no);
    temp=no;
     Count(no);
    no=temp;
    int result=armstrong(no);

    if (result==1)
    {
        printf("\nNumber is armstrong number");
    }
    else
    {
        printf("\nNumber is not a armstrong number");
    }
    
}