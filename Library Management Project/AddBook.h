#include <stdio.h>
#include "struAddBook.h"

void AddBook(struct struAddBook b)
{
   FILE *fptr;
   int choice;
   printf("\n1:Computer");
   printf("\n2:Electrical");
   printf("\n3:Civil");
   printf("\n4:Electronics");
   printf("\n5:Mechanical");
   printf("\n6:Architecture");
   printf("\nEnter choice\n");
   scanf("%d",&choice);
   
   switch (choice)
   {
   case 1:
      fptr = fopen("H:\\C-training\\Library Management Project\\Computer.txt", "a+");
      //fprintf(fptr, "%d\%s\%s\%d\%d\%d\%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fwrite(&b,sizeof(struct struAddBook),1,fptr);
      fclose(fptr) ;
      printf("\nBook added Succesfully\n");
      break;

   case 2:
      fptr = fopen("H:\\C-training\\Library Management Project\\Electrical.txt", "a+");
      fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fclose(fptr) ;
      printf("\nBook added Succesfully\n");
      break;

   case 3:
      fptr = fopen("H:\\C-training\\Library Management Project\\Civil.txt", "a+");
      fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;
   case 4:
      fptr = fopen("H:\\C-training\\Library Management Project\\Electronics.txt", "a+");
      fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;
   case 5:
      fptr = fopen("H:\\C-training\\Library Management Project\\Mechanical.txt", "a+");
      fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;

   case 6:
      fptr = fopen("H:\\C-training\\Library Management Project\\Architecture.txt", "a+");
      fprintf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;

   default:
      printf("\nInvalid Input");
      break;
   }
} 