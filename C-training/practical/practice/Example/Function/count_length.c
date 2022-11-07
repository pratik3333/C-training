// write a program to count length of string

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char ch[100];
    printf("Enter the string value: ");
    gets(ch);

    int c=strlen(ch);
    printf("Length of string is %d\n",c);
    getch();
}