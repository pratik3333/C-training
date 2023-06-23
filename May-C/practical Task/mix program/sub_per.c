// WAP to input marks of five subjects physics,chemistry,Biology,Math and Computer

#include <stdio.h>
void main()
{
    int phy, che, bio, math, computer;
    float per;
    printf("Enter the six subjects of marks: ");
    scanf("%d%d%d%d%d", &phy, &che, &bio, &math, &computer);

    per = (phy + che + bio + math + computer) / 5;

    if (per >= 90)
    {
        printf("Grade A");
    }
    else if (per >= 80 && per < 90)
    {
        printf("Grade B");
    }
    else if (per >= 70 && per < 80)
    {
        printf("Grade C");
    }
    else if (per >= 60 && per < 70)
    {
        printf("Grade D");
    }
    else if (per >= 40 && per < 60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}