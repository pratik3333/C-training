#include<stdio.h>
#include "saveproduct.h"
#include<stdlib.h>
int main()
{
    int choice;
    do
    {
        printf("\n1:Add new product");
        printf("\n1:Add new product");
        printf("\n2:view products");
        printf("\n3:search product");
        printf("\n\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:{
           struct product *p;
            int size;
            printf("\nEnter how many items you want to add: ");
            scanf("%d", &size);
            for (int i = 0; i < size; i++)
            {
                printf("\nEnter item name, id and weight: ");
                _flushall();
                gets(p[i].name);
                scanf("%d%d", &p[i].id,&p[i].price);
                addproduct (p[i]);
                printf("\n%d:-Data save...", i + 1);
            }
            // fclose(fptr);
        }
            break;
        case 2:
            break;
        case 3:
            break;

        default:
            printf("\nInvalid Input");
            break;
        }

    } while (choice < 3);

    return 0;
}