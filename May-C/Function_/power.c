#include<stdio.h>
void main()
{
    void power(int,int);  //Declaration
    int base,index,p=1;
    printf("\nEnter base\n");
    scanf("%d",&base);
    printf("\nEnter index\n");
    scanf("%d",&index);
    
    power(base,index);   //calling
    
}

 void power(base,index)   //Defination
 {
    int p=1,i;
    for ( i = 1; i <=index; i++)
    {
        p=p*base;
    }
    printf("\nPower is %d",p);
 }