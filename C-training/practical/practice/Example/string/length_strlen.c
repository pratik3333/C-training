// calculate the length of string with the help of strlen

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch[90];
    printf("Enter the string value: ");
    gets(ch);

    int l=strlen(ch);
    printf("The length of string is %d",l);
    return 0;
}
