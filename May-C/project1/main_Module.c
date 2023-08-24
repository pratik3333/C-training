#include <stdio.h>
#include "saveproduct.h"
#include <stdlib.h>
// #include "product.h"
#include "view.h"
#include "search.h"
int size;
 struct product p;
int main()
{
    int choice,sid;
    
    do
    {
        printf("\n1:Add new product");
        printf("\n2:view products");
        printf("\n3:search product");
        printf("\n\nEnter choice: ");
        scanf("%d", &choice);
        struct product *p1;
        switch (choice)
        {
        case 1:
             
            printf("\nEnter how many items you want to add: ");
            scanf("%d", &size);
            for (int i = 0; i < size; i++)
            {
                printf("\nEnter item name, id and weight: ");
                _flushall();
                gets(p1[i].name);
                scanf("%d%d", &p1[i].id, &p1[i].price);
                addproduct(p1[i]);
                
            }
            // fclose(fptr);
            break;
        case 2:
            
            viewproduct();
            break;
        case 3:
        // int sid;
         printf("Enter search id : ");
         scanf("%d",&sid);
        searchprod(sid);
            break;

        default:
            printf("\nInvalid Input");
            break;
        }

    } while (choice < 4);

    return 0;
}