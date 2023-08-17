#include<stdio.h>

struct product
{
    int id;
    char name[90];
    int price;
};

struct product p[5];

void main()
{
   for (int i = 0; i <5; i++)
   {
     printf("Enter product name, id and price\n");
     scanf("%s %d %d",&p[i].name,&p[i].id,&p[i].price);
   }
   
   printf("\nDisplay all products: \n");
   for (int i = 0; i <5; i++)
   {
      printf("%s %d %d\n",p[i].name,p[i].id,p[i].price);
   }

   //Apply sorting on product price
   for (int i = 0; i < 5; i++)
   {
       for (int j = 0; j <5; j++)
       {
          if (p[i].price < p[j].price)
          {
            struct product temp = p[i];
            p[i]=p[j];
            p[j]=temp;
          }
          
       }
       
   }
   
   printf("\nDisplay all products after sorting\n");
   for (int i = 0; i < 5; i++)
   {
      printf("\n%s %d %d",p[i].name,p[i].id,p[i].price);
   }
   
   
}