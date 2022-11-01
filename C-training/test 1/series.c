#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    int t1=0,t2=1;

    int nextterm=t1+t2;

    // taking input from user
    printf("Enter the number:\n");
    scanf("%d",&n);
    

    // printing loop up to input number
    for ( i = 3; i <n; i++)
    {
        t1=t2;
        t2=nextterm ;
        nextterm=t1+t2;

        
    }
    printf("%d",nextterm);
    
    return 0;
}
