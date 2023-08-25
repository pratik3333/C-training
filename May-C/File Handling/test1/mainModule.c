#include <stdio.h>
#include "insertpro.h"
#include <stdlib.h>
struct product p;
int size, i;

void main()
{
    int choice;
    
    do
    {
        printf("\n1:Insert");
        printf("\n2:View");
        printf("\n3:Search");
        printf("\n\n Enter choice\n");
        scanf("%d", &choice);
        struct product *pro;

        switch (choice)
        {
        case 1:

            printf("\nEnter how many items you want to add: ");
            scanf("%d", &size);
            for (i = 0; i < size; i++)

            // here is allocate memory to pointer
            pro=(struct product*)malloc(sizeof(struct product)*size);
            for (int i = 0; i < size; i++)

            {
                printf("\nEnter product name, id and weight: ");
                _flushall();
                gets(pro[i].name);
                scanf("%d%d", &pro[i].id, &pro[i].price);
                addproduct (pro[i]);
            }

            break;
        // case 2:

        //     break;
        default:
        printf("\nInvalid Input\n");
            break;
        }
    } while (choice < 4);
}
