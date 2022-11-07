
#include <stdio.h>
#include <conio.h>
#include <string.h>

uppercase()
int main(int argc, char const *argv[])
{
    char ch[100];
    printf("Enter the value in string\n");
    gets(ch);
    printf("Before conversion is %s\n",ch);
    result=upper();
    getch();
}

char uppercase(){
    char result=strupr(ch);
}