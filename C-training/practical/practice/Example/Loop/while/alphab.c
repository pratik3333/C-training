// write a C program to print all alphabets from a to z using while loop

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch='a';
    
    printf("alphabets from a to z are: ");

    while (ch<='z')
    {
        printf("%c\n",ch);
        ch++;
    }
    
    
    return 0;
}
