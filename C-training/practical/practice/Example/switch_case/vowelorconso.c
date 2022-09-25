// Write a C program to check whether an alphabet is vowel or consonant using switch case.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("Vowel");

        break;
    
    default:
    printf("Consonant");
        break;
    }
    return 0;
}
