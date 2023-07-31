#include<stdio.h>
void main()
{
  void table(int);  //Declaration
  int no;
  printf("\nEnter a number\n");
  scanf("%d",&no);
  
  table(no);  //Calling
}

void table(no)  //Defination
{   
    int i;
    printf("\nTable of %d is : \n",no);
    for ( i = 1; i <=10; i++)
    {
        printf("\n%d",i*no);
    }
    
}
