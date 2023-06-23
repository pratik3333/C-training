#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if ((ch>='a' && ch<'z') || ch>='A' && ch<='Z')
    {
        printf("Character");
    }
    else if (ch<='0' && ch>='9')
    {
        printf("Number");
    }
    else
    {
        printf("special symbol");
    }
    
}