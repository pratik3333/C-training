// #include<stdio.h>
// #include "product.h"


void viewproduct()
{
    FILE *fptr;
    struct product p;
    fptr=fopen("H:\\C-training\\May-C\\projrct1\\database.txt","r+");
    while (fscanf(fptr,"%s%d%d",&p.name,&p.id,&p.price)!=EOF)
    {
        printf("%s\t%d\t%d\n",p.name,p.id,p.price);
    }
    fclose(fptr);
}