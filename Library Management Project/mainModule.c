#include <stdio.h>
#include "AddBook.h"
#include<stdlib.h>
struct struAddBook b;
int choice,size,i;
FILE *fptr;


void main()
{
     do
    {
        printf("\n1 : Add Book : ");
        printf("\n2 : Delete Book : ");
        printf("\n3 : Issue Book : ");
        printf("\n4 : Search Book : ");
        printf("\n5 : View Book List : ");
        printf("\n6 : Edit Book Record : ");
        printf("\n7 : Close The Application : ");
        printf("\nEnter which operation do you want to add:\n");
        scanf("%d", &choice);
        struct struAddBook *b1;
        int count=0;

        switch (choice)
        {
        case 1:
           printf("\nEnter how many books you want to add: \n");
           scanf("%d",&size);
           b1=(struct struAddBook *)malloc(sizeof(struct struAddBook)*size);
            
            for ( i = 0; i <size; i++)
            {
                printf("\nEnter Boook_ID Book_Name Auther_Name Book_Quantity Book_Price Book_count Book_Rack:\n");
                b1[i].bookId=count;
                _flushall();
                gets(b1[i].bookname);
                gets(b1[i].authorName);
                scanf("%d%d%d%d",&b1[i].bookQuantity,&b1[i].bookPrice,&b1[i].bookCount,&b1[i].bookRackno);
                AddBook (b1[i]);
            } 
            break;
        default:
            printf("\nInvalid Input ...");
            break;
        }
    }
    while (choice<7);
    
}