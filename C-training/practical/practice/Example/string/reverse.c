// write a c program to reverse given string.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char first[100];
    printf("Enter the value: ");
    gets(first);
    printf("Before reverse string is %s\n",first);
    strrev(first);
    printf("After reverse string %s\n",first);
    return 0;
}
