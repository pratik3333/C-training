#include <stdio.h>
void UpdateBook()
{
    FILE *fptr, *fptr1;
    int Uid, depId;
    struct struAddBook b1;

    printf("\n1:Computer");
    printf("\n2:Electrical");
    printf("\n3:Civil");
    printf("\n4:Electronics");
    printf("\n5:Mechanical");
    printf("\n6:Architecture");
    printf("\nPlease enter which departments book you want to Update...:\n");
    scanf("%d", &depId);

    printf("Enter id which you want to delete : ");
    scanf("%d", &Uid);
    switch (depId)
    {
    case 1:

        fptr = fopen("H:\\C-training\\Library Management Project\\Computer.txt", "a+");
        fptr1 = fopen("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "w+");
        if (fptr == NULL)
        {
            fprint("\n File opening Error\n");
            exit(1);
        }
        while (fread(b1, sizeof(struct struAddBook), 1, fptr))
        {
            if (if (b1.bookId != Uid))
            {
                fwrite(b1, sizeof(struct struAddBook), 1, fptr2);
            }
        }
        printf("\nEnter Boook_ID Book_Name Auther_Name Book_Quantity Book_Price Book_count Book_Rack:\n");
        scanf("%d", &b1[i].bookId);
        scanf("%d", &b1[i].bookId);
        _flushall();
        gets(b1[i].bookname);
        gets(b1[i].authorName);
        scanf("%d%d%d%d", &b1[i].bookQuantity, &b1[i].bookPrice, &b1[i].bookCount, &b1[i].bookRackno);
        
          fclose(fptr);
          fclose(fptr1);
         fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
         remove("H:\\C-training\\Library Management Project\\Computer.txt");
         rename("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "H:\\C-training\\Library Management Project\\Computer.txt");
    printf("\nRecord Updated Succesfully......");


        break;

    default:
        printf("\nInvalid ID");
        break;
    }
}