
void searchBook(int sid)
{
    int flag = 0;
    struct struAddBook b;
    FILE *fptr;

    int choice;
    printf("\nEnter which departments Book you want to search\n");
    printf("\n1:Computer");
    printf("\n2:Electrical");
    printf("\n3:Civil");
    printf("\n4:Electronics");
    printf("\n5:Mechanical");
    printf("\n6:Architecture");
    printf("\nPlease Enter choice\n");
    scanf("%d", &choice);
    printf("\nEnter Id for search the Book :\n");
    scanf("%d", &sid);

    switch (choice)
    {
    case 1:
        fptr = fopen("H:\\C-training\\Library Management Project\\Computer.txt", "a+");
        while (fscanf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", &b.bookId, &b.bookname, &b.authorName, &b.bookQuantity, &b.bookPrice, &b.bookCount, &b.bookRackno) != -1)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        fclose(fptr);
        if (flag)
        {
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
            printf("\n Book is found...");
        }
        else
        {
            printf("\n Book is Not found... ");
        }
        break;
    case 2:
        fptr = fopen("H:\\C-training\\Library Management Project\\Electrical.txt", "a+");
        while (fscanf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", &b.bookId, &b.bookname, &b.authorName, &b.bookQuantity, &b.bookPrice, &b.bookCount, &b.bookRackno) != -1)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        fclose(fptr);
        if (flag)
        {
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
            printf("\n Book is found...");
        }
        else
        {
            printf("\n Book is Not found... ");
        }
        break;

      case 3:
        fptr = fopen("H:\\C-training\\Library Management Project\\Civil.txt", "a+");
        while (fscanf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", &b.bookId, &b.bookname, &b.authorName, &b.bookQuantity, &b.bookPrice, &b.bookCount, &b.bookRackno) != -1)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        fclose(fptr);
        if (flag)
        {
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
            printf("\n Book is found...");
        }
        else
        {
            printf("\n Book is Not found... ");
        }
        break;

     case 4:
        fptr = fopen("H:\\C-training\\Library Management Project\\Electronics.txt", "a+");
        while (fscanf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", &b.bookId, &b.bookname, &b.authorName, &b.bookQuantity, &b.bookPrice, &b.bookCount, &b.bookRackno) != -1)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        fclose(fptr);
        if (flag)
        {
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
            printf("\n Book is found...");
        }
        else
        {
            printf("\n Book is Not found... ");
        }
        break;

    case 5:
        fptr = fopen("H:\\C-training\\Library Management Project\\Mechanical.txt", "a+");
        while (fscanf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", &b.bookId, &b.bookname, &b.authorName, &b.bookQuantity, &b.bookPrice, &b.bookCount, &b.bookRackno) != -1)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        fclose(fptr);
        if (flag)
        {
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
            printf("\n Book is found...");
        }
        else
        {
            printf("\n Book is Not found... ");
        }
        break;
        
        case 6:
        fptr = fopen("H:\\C-training\\Library Management Project\\Architecture.txt", "a+");
        while (fscanf(fptr, "%d\t%s\t%s\t%d\t%d\t%d\t%d\n", &b.bookId, &b.bookname, &b.authorName, &b.bookQuantity, &b.bookPrice, &b.bookCount, &b.bookRackno) != -1)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        fclose(fptr);
        if (flag)
        {
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
            printf("\n Book is found...");
        }
        else
        {
            printf("\n Book is Not found... ");
        }
        break;
    default:
        printf("\nInvalid Input");
        break;
    }

}