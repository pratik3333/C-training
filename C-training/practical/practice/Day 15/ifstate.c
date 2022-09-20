#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);

    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("%c is a vowel.",c);
    }
    else
    {
        printf("%c is a Consonant.",c);
    }
    
    return 0;
}
