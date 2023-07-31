#include<stdio.h>
void main()
{
    void add(int,int); //Declaration
    int a,b;
    printf("\nEnter two values\n");
    scanf("%d %d",&a,&b);

    add(a,b);  //calling

}

void add(int x, int y)   //Defination
{
    printf("\nAddition is %d ",x+y);
}