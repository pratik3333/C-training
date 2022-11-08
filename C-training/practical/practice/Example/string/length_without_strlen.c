// calculate the length of string without using strlen

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch[90];
    printf("Enter the string: ");
    gets(ch);

    int count=0;
    while (ch[count]!='\0')
    {
        count++;
    }

    printf("Length of string is %d\n",count);
    return 0;
}
