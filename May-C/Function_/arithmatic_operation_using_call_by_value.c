#include <stdio.h>
int res = 0;
float resDiv = 0;

int getAddition(int x, int y)
{
    res = x + y;
    return res;
}

int getSubstraction(int x, int y)
{
    res = x - y;
    return res;
}

int getMultiplication(int x, int y)
{
    x = 10;
    y = 20;

    res = x * y;

    return res;
}

int getDivision(int x, int y)
{
    resDiv = x / y;
    return resDiv;
}

void main()
{
    int a, b;
    printf("\nEnter the two numbers\n");
    scanf("%d %d", &a, &b);

    int sumresult = getAddition(a, b);
    printf("\nSum of two number is %d", sumresult);

    printf("\n%d %d", a, b);

    int substractionresult = getSubstraction(a, b);
    printf("\nSubstraction of two number is %d", substractionresult);

    printf("\n%d %d", a, b);

    int mulresult = getMultiplication(a, b);
    printf("\nMultiplication is %d", mulresult);

    printf("\n%d %d", a, b);

    float Divresult = getDivision(a, b);
    printf("\nDivision is %f", Divresult);
}