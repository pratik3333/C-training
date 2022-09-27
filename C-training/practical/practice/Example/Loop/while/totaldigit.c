// write a program input the number and count its total digit.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    long int no,count=0;
    printf("Enter thr number: ");
    scanf("%Ld",&no);

    while (no!=0)
    {
        no=no/10;
        ++count;

    }
    printf("Number of digits is %Ld\n",count);
    
    return 0;
}
