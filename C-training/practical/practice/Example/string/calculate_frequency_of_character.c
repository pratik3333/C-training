#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int coount = 1, i;
    char ch[100];
    printf("\n Enter a string: ");
    gets(ch);
    int k = strlen(ch);
    for (i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (ch[i] > ch[j])
            {
                char t = ch[i];
                ch[i] = ch[j];
                ch[j]=t;
            }
        }
    }
    printf("\n After swap =%s", ch);
    return 0;
}
