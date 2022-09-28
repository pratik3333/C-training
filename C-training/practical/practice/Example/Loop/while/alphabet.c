// write a program to print all alphabets from A to Z capital and small

#include <stdio.h>
int main(int argc, char const *argv[])
{
     char cha='a';
    int ch = 65;
    printf("Alphabets from a to z are: ");

    while (cha<='z')
    {
        printf("%c\n",cha);

        cha++;
    }
    
    printf("Alphabets from A to Z are: ");
    while (ch<=90)
    {
        printf("%c\n",ch);
        ch++;
    }
    
    
    
    

    return 0;
}
