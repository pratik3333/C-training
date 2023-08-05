#include<stdio.h>
#include<math.h>
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
    *x=20;
    *y=10;
    res=(*x) * (*y);
    return res;
}

int getDivision(int *x,int *y)
{
    res=(float)*x / (float)*y;
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

   int divresult = getDivision(&a,&b);
   printf("\nDivision is %d",divresult);

   printf("\n%d %d",a,b);

   int mulresult = getmultiplication(&a,&b);
   printf("\nMultiplication is %d",mulresult);

    printf("\n%d %d",a,b);
   

}