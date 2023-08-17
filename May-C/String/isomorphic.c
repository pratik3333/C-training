#include<stdio.h>
#include<String.h>

void main()
{
    char ch[90],ch1[90];
    int i,count=1,count1=1,flag=0;

    printf("\nEnter first String: \n");
    gets(ch);
    printf("\nEnter second String: \n");
    gets(ch1);

    int l=strlen(ch);
    int l1=strlen(ch1);

    if (l==l1)
    {
        for ( i = 0; i <l; i++)
        {
            int x=ch[0],k,y=ch1[0];
            for ( k = 0; k<l; k++)
            {
                if (ch[x]==ch[k])
                {
                    ++count;
                }
                else if (ch1[y]==ch1[k])
                {
                    ++count1;
                }
                
                
            }
            if (count==count1)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            
        }
        
    }
    else
    {
        printf("\nGiven strings are not Isomorphic");
    }
    
}