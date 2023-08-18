
#include<stdio.h>
#include<stdlib.h>

struct product
{
    int id;
    char name[90];
    int price;
};

struct product *p;

int main()
{
    p=(struct product*)malloc(sizeof(struct product));
    printf("\nEnter product name, id and price\n;");
    scanf("%s %d %d",&p->name,&p->id,&p->price);
    printf("\nName is %s",p->name);
    printf("\nid is %d",p->id);
    printf("\nprice is %d",p->price);
    return 0;
}