// write a program to count no. of vowels in a string

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int count = 0;
    int c = 0;
    char ch[100];
    printf("Enter the string: \n");
    gets(ch);

    // char x='a,e,i,o,u';

    while (ch[c] != '\0')
    {
        if (ch[c] == 'a' || ch[c] == 'e' || ch[c] == 'i' || ch[c] == 'o' || ch[c] == 'u')
        
             count++;
            c++;
        
    }
    printf("Number of vowels in string is %d",count);

    return 0;
}
