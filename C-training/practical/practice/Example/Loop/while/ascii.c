// write a program to print all ASCII character from 1 to 255

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ch=1;

    while (ch<=255)
    {
        printf("%d==>%c\t",ch,ch);
        
        ch++;
    }
    
    return 0;
}
