// #include "Computer.txt"
// #include "struAddBook.h"
#include<stdio.h>
void showBook(struct struAddBook bb)
{
  printf("\n=========\n");
   printf("\t id =%d name=%s",bb.bookId,bb.bookname);
}
void deleteBook()
{
   
    FILE *fptr, *fptr1;
    int did;
    struct struAddBook b1;

     printf("Enter id which you want to delete : ");
    scanf("%d", &did);
    printf("\nI take delete book id\n");

    fptr = fopen("H:\\C-training\\Library Management Project\\Computer.txt", "a+");
    fptr1 = fopen("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "w+");
    if (fptr == NULL || fptr1==NULL)
    {
        printf("record is not exist...");
    }
    // else
    // {
   
    while (1)
    {
        if(fread(&b1, sizeof(struct struAddBook), 1, fptr)>0)
        {
        printf("\nhello@@@@@@@@@@@@@@@@@@@@");
        showBook(b1);
        if (b1.bookId != did)
        {
            printf("\n*********** book Not matched********\n");
             showBook(b1);
            fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
            //			 fwrite(&b1, 1, sizeof(struct struAddBook)  1, fptr1);
        }
        }
        else
        {
            printf("File read error@@@@@");
            break;
        }
    }
    // }

    fclose(fptr);
    fclose(fptr1);
    viewBookList123();
   
    if(remove("H:\\C-training\\Library Management Project\\Computer.txt")==0)
      {
        printf("file removed successfully###");
      }
      else
      {
        printf("File not removed!!!!!!!!!!!!");
      }
     rename("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "H:\\C-training\\Library Management Project\\Computer.txt");
      printf("delete record successfully.....");
      
}