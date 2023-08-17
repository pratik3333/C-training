#include<stdio.h>
#include<String.h>
void main()
{
    char ch[90],s,e;
    int i;

    printf("\nEnter string: ");
    gets(ch);

    printf("\nDisplay string:\n");
    printf("%s",ch);

    int len=strlen(ch);

    for ( i = 0; i < len; i++)
    {
        if (ch[i]==32)
        {
             e=ch[i-1];
            printf("%c\n",e);
        }
       
        
    }
    
} 