#include<stdio.h>
#include<String.h>
void main()
{
    char ch[90];
    int count,i,j,temp;

    printf("\nEnter the string: ");
    gets(ch);

    int len=strlen(ch);

    for ( i = 0; i <len; i++)
    {
         for ( j = i+1; j <len; j++)
         {
            if (ch[i]>ch[j])
            {
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
            
         }
         
    }
    


    count=0;
    for ( i = 0; i <len; i++)
    {
                  
        if (ch[i]==ch[i+1] )
        {
            ++count;
            
        }
        else if(ch[i]!=32 && ch[i+1]!=32)
        {
            printf("\n%c ----- %d",ch[i],count);
            count=1;
        }

        
    }
    


    
    
}