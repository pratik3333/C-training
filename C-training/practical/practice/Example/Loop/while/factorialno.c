// write a program input the number and calculate its factorial
// 5*4*3*2*1=120
// f=1
// f=f*5    1*5=5
// f=f*4    5*4=20
// f=f*3    20*3=60
// f=f*2    60*2=120
// f=f*1    120*1=120



#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no,i,f=1;
    printf("Enter the number: ");
    scanf("%d",&no);

    i=no;
    // while (i>0)
    // {
    //     f=f*i;
    //     i--;

    // }

    while (no!=0)
    {
        f=f*no;
        no--;
    }
    

    printf("%d",f);
    

    return 0;
}
