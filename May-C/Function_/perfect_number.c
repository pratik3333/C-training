#include<stdio.h>
void main()
{
  void perfect(no);
  int no;
  printf("\nEnter the number\n");
  scanf("%d",&no);

   perfect(no);
}

void perfect(no)
{
    int i,sum=0;
    for ( i = 1; i <no; i++)
    {
        if (no%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (sum==no)
    {
        printf("\n%d is a perfect number",no);
    }
    else
    {
        printf("\n%d is not a perfect number",no);
    }
    
    

}
