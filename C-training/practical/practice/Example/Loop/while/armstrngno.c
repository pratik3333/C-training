// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int no,arm=0,r,c;

//     printf("Enter the number: ");
//     scanf("%d",&no);
//     c=no;

//     while (no>0)
//     {
//         r=no%10;
//         arm=(r*r*r)+arm;

//         no=no/10;

//     }
//     if (c==arm)
//     {
//         printf("Number is an armstrong number.");
//     }
//     else{
//         printf("Number is not an armstrong number.");
//     }
    
    
//     return 0;
// }

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=0, j=1, k=2,m;
    m=i++ || j++ || k++;
    printf("%d%d%d%d",m,i,j,k);
    return 0;
}
