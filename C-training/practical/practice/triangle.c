#include <stdio.h>
int main(int argc, char const *argv[])
{
    int side1,side2,side3;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d",&side1,&side2,&side3);
    (side1==side2 && side2==side3)?printf("Triangle is Equilateral"):(side1==side2||side2==side3||side3==side1)?printf("Triangle is Isoscale"):printf("Triangle is Scalene");


    return 0;
}
