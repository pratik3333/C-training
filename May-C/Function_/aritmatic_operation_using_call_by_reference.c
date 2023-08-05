#include<stdio.h>
int res=0;

int getsum(int *x, int *y)
{
    res=*x+*y;
    return res;
}

int substraction(int *x, int *y)
{
    res=*x - *y;
    return res;
}

int getmultiplication(int *x, int *y)
{
    res=(*x) * (*y);
    return res;
}

int getDivision(int *x,int *y)
{
    res=*x / *y;
    return res;
}
void main()
{
    int a,b;
    printf("\nEnter two values\n");
    scanf("%d %d",&a,&b);

    int sumresult=getsum(&a,&b);
    printf("sum is %d",sumresult);

    int subresult = substraction(&a,&b);
   printf("\nSubstraction is %d",subresult);

   int mulresult = getmultiplication(&a,&b);
   printf("\nMultiplication is %d",mulresult);

   int divresult = getDivision(&a,&b);
   printf("\nDivision is %d",divresult);

   

}