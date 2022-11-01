// write a c program to print array elements from last to first

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] ={1,2,3,4,5};
    int temp,start,end,l;
    
    int l=sizeof(a)/sizeof(a[0]);
    int m=l/2;
    int end=(l-1);

    for ( start=0; start<m; start++);

    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        end--;

    }


    return 0;
}

// #include<stdio.h>
// #include<conio.h>
// main()
// {
//      int i,j;
//      char ch='A';
//      clrscr();
// 	 for(i=1;i<=6;i++)
// 	  {
// 	     for(j=1;j<=6;j++)
// 	     {
// 		  if(j<=6-i)
// 		  {
// 		     printf(" ");
// 		  }
// 		  else
// 		  {
// 		     printf("%c",ch);

// 		  }
// 	      }
// 	      if(i%2==1)
// 		 {
// 		      ch=ch+32;
// 		 }
// 	      else
// 		 {
// 		     ch=ch-32;
// 		 }
// 	     ch++;
// 	      printf("\n");
// 	  }
// 	  getch();

// }