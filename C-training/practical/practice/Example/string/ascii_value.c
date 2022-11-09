// write a C program to print ASCCI value of letters in string

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch[100];
    printf("Enter the string value: ");
    gets(ch);

    while (ch!='\0')
    {
        if (ch>='a' && ch<='z')
        {
            
        }
        printf(" %d",ch);
    }
    
    return 0;
}
