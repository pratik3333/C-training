#include <stdio.h>
#include <conio.h>

int main()
{
    double a,b,c;

    printf("Enter the three numbers:\n ");
    scanf("%lf %lf %lf",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("%2f is greater",a);
    }
    else if (b>a && b>c)
    {
        printf("%2f is grater",b);
    }
    else if (c>a && c>b)
    {
        printf("%2f is greater",c);
    }
    else
    printf("Invalid input");   

}