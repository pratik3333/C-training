#include<stdio.h>
#include "struAddBook.h"

void AddBook(struct struAddBook b)
{
   FILE *fptr;
   fptr=fopen("H:\\C-training\\Library Management Project\\bookDatabase.txt","a+");
   fprintf(fptr,"%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.bookId,b.bookname,b.authorName,b.bookQuantity,b.bookPrice,b.bookCount,b.bookRackno);
   fclose(fptr);
   printf("\nBook added Succesfully\n");
}