#include<stdio.h>
#include<string.h>
void main()
{
    char ch[90];
    int i,sum=0,a;
    printf("\nEnter the string : ");
    gets(ch);

    int len=strlen(ch);

    for ( i = 0; i <len; i++)
    {
        if (ch[i]>=48 && ch[i]<=58)
        {
            a=ch[i]-48;
            sum=sum+a;
        }
        
    }
    printf("\n Sum is %d",sum);
    
}