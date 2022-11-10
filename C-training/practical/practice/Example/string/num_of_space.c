// // write a c program to print no. of white spaces in a given string

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     int count=1;
//     char ch[100];
//     printf("Enter the string: ");
//     gets(ch);

//     for (int i = 0; ch[i]!='\0'; i++)
//     {
//         if (ch[i]==' ' && ch[i+1]!=' ')
//         {
//             count++;
//         }
        
//     }
//     printf("\n Number of spaces = %d",count);
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i=0;
    char ch[100];
    int space=0;
    printf("Enter the string: ");
    gets(ch);

    while (i<=ch[i])
    {
        if (ch[i]==' ')
        {
            space++;
        }
        i++;
    }
    printf("Total white space is:%d",space);

    return 0;
}
