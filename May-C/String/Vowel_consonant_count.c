#include <stdio.h>
#include <String.h>
void main()
{
    char ch[90];
    int i;
    int countVOwel = 0, countConsonant = 0;

    printf("\nEnter the string: ");
    gets(ch);

    printf("\n Sring is: %s", ch);

    int len = strlen(ch);
    for (i = 0; i < len; i++)
    {
        if (ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'a' || ch[i] == 'e' ||
            ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
        {

            ++countVOwel;
        }
        else
        {
            ++countConsonant;
        }
    }

    printf("\nVowel %d", countVOwel);
    printf("\nConsonant %d", countConsonant);
}