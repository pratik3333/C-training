//  int strcmp (char[],intchar[]): this function is used for perform comparision between two strings.
// if two string are equal return 0 otherwise return the first mismatch character of ascci code.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char first[90];
    char second[90];

    printf("Enter the first string value: ");
    gets(first);

    printf("Enter the second string value: ");
    gets(second);

    int value=strcmp(first,second);

    if (value==0)
    {
        printf("Strings are equal.");
    }
    else{
        printf("Strings are not equal.");
    }
    
    return 0;
}
