// write a program input the two values consider first as base and second as index and calculate its power


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int base,index,p=1;
    printf("Enter the base and Index: ");
    scanf("%d%d",&base,&index);

    while (index!=0)
    {
        p=p*base;
        index=index-1;

    }
    printf("Power is %d\n",p);

    return 0;
}
