// WAP to print Uppercase and lowercase characters using while loop
#include<stdio.h>
void main()
{
    int i='a',j='A';

    printf("\nLowercase characters are: ");
    while (i>='a' && i<='z')
    {
        printf("\n%c",i);
        i++;
    }
 
    
    
    printf("\nUppercase characters are: ");
    while (j>='A' && j<='Z')
    {
        printf("\n%c",j);
        j++;
    }
    

}