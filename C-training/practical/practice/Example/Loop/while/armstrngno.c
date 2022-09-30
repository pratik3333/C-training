#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no,arm=0,r,c;

    printf("Enter the number: ");
    scanf("%d",&no);
    c=no;

    while (no>0)
    {
        r=no%10;
        arm=(r*r*r)+arm;

        no=no/10;

    }
    if (c==arm)
    {
        printf("Number is an armstrong number.");
    }
    else{
        printf("Number is not an armstrong number.");
    }
    
    
    return 0;
}

