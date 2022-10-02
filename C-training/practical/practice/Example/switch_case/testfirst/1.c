// write a program to accept a character from user and convert it to upper/lower case

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    char inpu;

    printf("Enter the character:");
    scanf("%c",&inpu);

    if (inpu<=90 && inpu>=65 )
    {
        ch=inpu+32;
        printf("Converted character is:%c ",ch);
    }
    else if (inpu<122 && inpu>=96)
    {
        ch=inpu-32;
        printf("Converted character is:%c",ch);
    }
    else
    {
        printf("something went wrong");
    }      

    return 0;
}
