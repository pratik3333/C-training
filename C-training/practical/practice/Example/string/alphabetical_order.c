// write a C program to sort names in alphabetical order


#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char name[5][100];
    printf("Enter the five names:\n");
    for (int i = 0; i < 5; i++)
    {
        gets(name[i]);
    }
    
    printf("Before conversion\n");
    for (int  i = 0; i < 5; i++)
    {
        printf("\n%s",name[i]);
    }
    
    

    
    return 0;
}
