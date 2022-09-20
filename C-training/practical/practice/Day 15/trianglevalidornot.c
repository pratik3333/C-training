#include <stdio.h>
int main(int argc, char const *argv[])
{
    int angle1,angle2,angle3;
    printf("Input first angle: ");
    scanf("%d",&angle1);

    printf("Input second angle: ");
    scanf("%d",&angle2);

    printf("Input third angle: ");
    scanf("%d",&angle3);

    if (angle1+angle2+angle3==180)
    {
        printf("\nTriangle is valid");
    }
    else
    {
        printf("\nTriangle is invalid");
    }
    
    return 0;
}
