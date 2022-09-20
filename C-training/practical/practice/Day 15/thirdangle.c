#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter first angle: ");
    scanf("%d",&a);

    printf("Enter second angle: ");
    scanf("%d",&b);

    c=180-(a+b);
    printf("\nThird angle of triangle=%d",c);
    

    return 0;
}
