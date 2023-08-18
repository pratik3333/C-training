
#include<stdio.h>
#include<stdlib.h>

struct Product
{
    int id;
    char name[90];
    int price;
};

struct Product *p;

void main()
{
    int size;
    printf("\nEnter the size");
    scanf("%d",&size);
    p=(struct Product *)malloc(sizeof(struct Product)*size);
    for (int i = 0; i <size; i++)
    {
        printf("\nEnter name, id and price\n");
        scanf("%s%d%d",&p[i].name,&p[i].id,&p[i].price);
    }
    
    printf("\nDispplay all products\n");
    for (int i = 0; i <size; i++)
    {
        printf("\n%s %d %d",p[i].name,p[i].id,p[i].price);
    }
    

}