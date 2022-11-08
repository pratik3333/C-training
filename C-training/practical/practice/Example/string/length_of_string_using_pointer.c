// calculate the length of string using pointer

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch[]={"good morning"};
    // char ch[90];
    // printf("Enter the string value: ");
    // gets(ch);
    int count=0;
    char *ptr;
    ptr=ch;

    while (*ptr!='\0')
    {
        ++count;
        ptr++;
    }
    printf("The length of string is %d\n",count);
    return 0;
}
