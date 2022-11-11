// write a C program to input the two strings and compare 
// with each other without using strcmp() function.

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char first[100];
    char second[100];

    printf("Enter the first string value: ");
    gets(first);
    printf("Enter the second string value: ");
    gets(second);

    int flen=strlen(first);
    int slen=strlen(second);

    if (flen==slen)
    {
        int flag=1, count=0;
        while (first[count]!='\0')
        {
            int diff=first[count]-second[count];
            if (diff!=0)
            {
                flag=0;
                break;
            }
            count++;
        }
        if (flag)
        {
            printf("string are equal");
        }
        else{
            printf("String are not equal");
        }
    }
    

    return 0;
}
