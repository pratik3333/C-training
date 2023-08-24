#include<stdio.h>

void searchprod(int sid)
{
 FILE *fptr;
 struct product p;
  fptr=fopen("H:\\C-training\\May-C\\projrct1\\database.txt","a+");
  printf("\n%d",sid);
   
int flag=0;
   while (fscanf(fptr,"%s%d%d",&p.name,&p.id,&p.price)!=EOF)
   {
       if (sid==p.id)
       {
         flag=1;
         break;
       }
       
   }
   if (flag)
   {
     printf("\nFound");
   }
   else
   {
    printf("\nNot found");
   }
   

}