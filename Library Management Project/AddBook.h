#include <stdio.h>
#include "struAddBook.h"

void AddBook(struct struAddBook b)
{
   FILE *fptr;
   int choice;
   printf("\n1:Electricle");
   printf("\n1:Civil");
   printf("\n1:Mech");
   printf("\nEnter choice\n");
   scanf("%d",&choice);
   
   switch (choice)
   {
   case 1:
      fptr = fopen("H:\\C-training\\Library Management Project\\Electricle.txt", "a+");
      fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fclose(fptr) ;
      printf("\nBook added Succesfully\n");
      break;

   case 2:
      fptr = fopen("H:\\C-training\\Library Management Project\\civil.txt", "a+");
      fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fclose(fptr) ;
      printf("\nBook added Succesfully\n");
      break;

   case 3:
      fptr = fopen("H:\\C-training\\Library Management Project\\mechanical.txt", "a+");
      fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;

   default:
      printf("\nInvalid Input");
      break;
      // }
      // fptr = fopen("H:\\C-training\\Library Management Project\\bookDatabase.txt", "a+");
      // fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      // fclose(fptr);
      // printf("\nBook added Succesfully\n");
   }
} 