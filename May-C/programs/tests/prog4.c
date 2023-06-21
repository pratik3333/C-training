#include<stdio.h>

void main()
{
    char ch;
    // we are taking character from user
    printf("Enter the character:");
    scanf("%c",&ch);


    // we applying the condition for alphabet
    if (ch>=65 && ch<=90 || ch>=90 && ch<=122)
    {
        printf("Character is alphabet");

    }
    // we puting the this condition for digit
    else if (ch>=48 && ch<=57)
    {
        printf("Character is digit");
    }
    else
    {
        printf("special symbol");
    }
    
}