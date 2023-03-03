#include <stdio.h>
int main()
    
{
    int no;
    char ch;
    printf("Enter 1 for checking alphbet is vowel or consonant");
    scanf("c",&ch);
    
    printf("Enter 2 for checking number is positive negative or zero");
    printf("Enter 3 for checking greatest among three numbers ");
    printf("Enter 4 for checking character is an uppercase or lowercase");
    printf("Enter 5 for checking number is divisible by  5 or 11 or not");


   
    scanf("%d",&no);

    switch (no)
    {
    case 1:
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c",&c);

    lowercase_vowel = (c == 'a' || c == 'e' || c =='i' || c =='o' || c == 'u');

    uppercase_vowel = (c == 'A' || c == 'E' || c =='I' || c =='O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel)
    {
        printf("%c is vowel",c);
    }
    else
    printf("%c is consonant",c);
        break;
    
    default:
    printf("Invalid input");
        break;
    }
}