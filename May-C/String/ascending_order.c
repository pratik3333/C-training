#include <stdio.h>
#include <string.h>
void main()
{
    char ch[90];
    int temp,i,j;
    printf("\nEnter the String: ");
    gets(ch);

    printf("\n string is: %s", ch);

   int len=strlen(ch);
   printf("\n len is %d",len);

   for ( i = 0; i <len; i++)
   {
    for ( j =i+1; j<len; j++)
    {
        if (ch[i]>ch[j])
        {
            temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
        }
        
    }
    
   }
   


    printf("\n ascending %s",ch);
}