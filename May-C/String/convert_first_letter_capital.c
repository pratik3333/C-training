#include<stdio.h>
#include<String.h>
void main()
{
    char ch[90];

    printf("\nEnter String: ");
    gets(ch);
    int len=strlen(ch);

    for (int i = 0; i <len; i++)
    {
        if (ch[0]>=97 && ch[0]<=122)
        {
            ch[0]=ch[0]-32;
        }
        else if (ch[i]==32)
        {
             ch[i+1]=ch[i+1]-32;
        }
        
    }
    printf("\n String is %s",ch);
}