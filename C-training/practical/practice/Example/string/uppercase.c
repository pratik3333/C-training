// strupr(): This function is used for convert the lower case string to upper case string.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ch[90];

    // taking input from user
    printf("Enter the string value: \n");
    gets(ch);

    // printing string before conversion
    printf("Before conversion is %s\n", ch);

    // using strupr()
    strupr(ch);

    // printing string After conversion
    printf("After conversion is %s\n", ch);
    return 0;
}
