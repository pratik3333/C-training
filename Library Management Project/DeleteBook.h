// #include "Computer.txt"
// #include "struAddBook.h"
#include<stdio.h>

void deleteBook()
{
    FILE *fptr, *fptr1;
    int did;
    struct struAddBook b1;

     printf("Enter id which you want to delete : ");
    scanf("%d", &did);
    printf("\nI take delete book id\n");

    fptr = fopen("H:\\C-training\\Library Management Project\\Computer.txt", "r+");
    fptr1 = fopen("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "a+");
    if (fptr == NULL)
    {
        printf("record is not exist...");
    }
    // else
    // {
   
    while (fread(&b1, sizeof(struct struAddBook), 1, fptr))
    {
        if (b1.bookId != did)
        {
            fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
            //			 fwrite(&b1, 1, sizeof(struct struAddBook)  1, fptr1);
        }
    }
    // }

    fclose(fptr);
    fclose(fptr1);

    remove("Computer.txt");
    rename("ComputerCopy.txt", "Computer.txt");
    printf("delete record successfully.....");
}