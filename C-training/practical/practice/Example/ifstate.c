// Write a C program to check whether an alphabet is vowel or consonant using 
// if else. How to check vowels and consonants using if else in C programming. C 
// Program to input a character from user and check whether it is vowel or 
// consonant. Logic to check vowel or consonant in C programming.
// Example
// Input
// Input character: a
// Output
// 'a' is vowel



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
