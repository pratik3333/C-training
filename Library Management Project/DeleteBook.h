#include <stdio.h>
void deleteBook()
{

  FILE *fptr, *fptr1;
  int did, depId;
  struct struAddBook b1;

  printf("\n1:Computer");
  printf("\n2:Electrical");
  printf("\n3:Civil");
  printf("\n4:Electronics");
  printf("\n5:Mechanical");
  printf("\n6:Architecture");
  printf("\nPlease enter which departments book you want to delete...:\n");
  scanf("%d", &depId);

  printf("Enter id which you want to delete : ");
  scanf("%d", &did);

  switch (depId)
  {
  case 1:

    fptr = fopen("H:\\C-training\\Library Management Project\\Computer.txt", "a+");
    fptr1 = fopen("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "w+");
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (1)
    {
      if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
        
        if (b1.bookId != did)
        {
          printf("\n*********** book Not matched********\n");
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

    fclose(fptr);
    fclose(fptr1);

    if (remove("H:\\C-training\\Library Management Project\\Computer.txt") == 0)
    {
      printf("file removed successfully###");
    }
    else
    {
      printf("File not removed!!!!!!!!!!!!");
    }
    rename("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "H:\\C-training\\Library Management Project\\Computer.txt");
    printf("delete record successfully.....");
    break;

  case 2:
    fptr = fopen("H:\\C-training\\Library Management Project\\Electrical.txt", "a+");
    fptr1 = fopen("H:\\C-training\\Library Management Project\\ElectricalCopy.txt", "w+");
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (1)
    {
      if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
        if (b1.bookId != did)
        {
          fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
          
        }
      }
      else
      {
        break;
      }
    }

    fclose(fptr);
    fclose(fptr1);

     remove("H:\\C-training\\Library Management Project\\Electrical.txt") ;
    
    rename("H:\\C-training\\Library Management Project\\ElectricalCopy.txt", "H:\\C-training\\Library Management Project\\Electrical.txt");
    printf("delete record successfully.....");
    break;
  case 3:
    fptr = fopen("H:\\C-training\\Library Management Project\\Civil.txt", "a+");
    fptr1 = fopen("H:\\C-training\\Library Management Project\\CivilCopy.txt", "w+");
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (1)
    {
      if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
        if (b1.bookId != did)
        {
          fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
          
        }
      }
      else
      {
        break;
      }
    }

    fclose(fptr);
    fclose(fptr1);

     remove("H:\\C-training\\Library Management Project\\Civil.txt") ;
    
    rename("H:\\C-training\\Library Management Project\\CivilCopy.txt", "H:\\C-training\\Library Management Project\\Civil.txt");
    printf("delete record successfully.....");
    break;

case 4:
    fptr = fopen("H:\\C-training\\Library Management Project\\Electronics.txt", "a+");
    fptr1 = fopen("H:\\C-training\\Library Management Project\\ElectronicsCopy.txt", "w+");
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (1)
    {
      if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
        if (b1.bookId != did)
        {
          fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
          
        }
      }
      else
      {
        break;
      }
    }

    fclose(fptr);
    fclose(fptr1);

     remove("H:\\C-training\\Library Management Project\\Electronics.txt") ;
    
    rename("H:\\C-training\\Library Management Project\\ElectronicsCopy.txt", "H:\\C-training\\Library Management Project\\Electronics.txt");
    printf("delete record successfully.....");
    break;

  case 5:
    fptr = fopen("H:\\C-training\\Library Management Project\\Mechanical.txt", "a+");
    fptr1 = fopen("H:\\C-training\\Library Management Project\\MechanicalCopy.txt", "w+");
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (1)
    {
      if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
        if (b1.bookId != did)
        {
          fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
          
        }
      }
      else
      {
        break;
      }
    }

    fclose(fptr);
    fclose(fptr1);

     remove("H:\\C-training\\Library Management Project\\Mechanical.txt") ;
    
    rename("H:\\C-training\\Library Management Project\\MechanicalCopy.txt", "H:\\C-training\\Library Management Project\\Mechanical.txt");
    printf("delete record successfully.....");
    break;
   case 6:
    fptr = fopen("H:\\C-training\\Library Management Project\\Architecture.txt", "a+");
    fptr1 = fopen("H:\\C-training\\Library Management Project\\ArchitectureCopy.txt", "w+");
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (1)
    {
      if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
        if (b1.bookId != did)
        {
          fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
          
        }
      }
      else
      {
        break;
      }
    }

    fclose(fptr);
    fclose(fptr1);

     remove("H:\\C-training\\Library Management Project\\Architecture.txt") ;
    
    rename("H:\\C-training\\Library Management Project\\ArchitectureCopy.txt", "H:\\C-training\\Library Management Project\\Architecture.txt");
    printf("delete record successfully.....");
    break;


    // case 2:

    //   fptr = fopen("H:\\C-training\\Library Management Project\\Electrical.txt", "a+");
    //   fptr1 = fopen("H:\\C-training\\Library Management Project\\Electricalcopy.txt", "w+");
    //   if (fptr == NULL || fptr1 == NULL)
    //   {
    //     printf("record is not exist...");
    //   }

    //   while (1)
    //   {
    //     if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
    //     {

    //       if (b1.bookId != did)
    //       {

    //         fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
    //       }
    //       else
    //       {
    //         printf("File read error@@@@@");
    //         break;
    //       }
    //     }
    //   }
    //   fclose(fptr);
    //   fclose(fptr1);

    //   remove("H:\\C-training\\Library Management Project\\Electrical.txt");
    //   rename("H:\\C-training\\Library Management Project\\Electricalcopy.txt", "H:\\C-training\\Library Management Project\\Electrical.txt");
    //   printf("delete record successfully.....");
    //   break;

    // case 3:

    //   fptr = fopen("H:\\C-training\\Library Management Project\\Civil.txt", "a+");
    //   fptr1 = fopen("H:\\C-training\\Library Management Project\\Civilcopy.txt", "w+");
    //   if (fptr == NULL || fptr1 == NULL)
    //   {
    //     printf("record is not exist...");
    //   }

    //   while (1)
    //   {
    //     if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
    //     {

    //       if (b1.bookId != did)
    //       {

    //         fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
    //       }
    //       else
    //       {
    //         printf("File read error@@@@@");
    //         break;
    //       }
    //     }
    //   }
    //   fclose(fptr);
    //   fclose(fptr1);

    //   remove("H:\\C-training\\Library Management Project\\Civil.txt");
    //   rename("H:\\C-training\\Library Management Project\\Civilcopy.txt", "H:\\C-training\\Library Management Project\\Civil.txt");
    //   printf("delete record successfully.....");
    //   break;

    //  case 4:

    //   fptr = fopen("H:\\C-training\\Library Management Project\\Electronics.txt", "a+");
    //   fptr1 = fopen("H:\\C-training\\Library Management Project\\ElectronicsCopy.txt", "w+");
    //   if (fptr == NULL || fptr1 == NULL)
    //   {
    //     printf("record is not exist...");
    //   }

    //   while (1)
    //   {
    //     if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
    //     {

    //       if (b1.bookId != did)
    //       {

    //         fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
    //       }
    //       else
    //       {
    //         printf("File read error@@@@@");
    //         break;
    //       }
    //     }
    //   }
    //   fclose(fptr);
    //   fclose(fptr1);

    //   remove("H:\\C-training\\Library Management Project\\Electronics.txt");
    //   rename("H:\\C-training\\Library Management Project\\ElectronicsCopy.txt", "H:\\C-training\\Library Management Project\\Electronics.txt");
    //   printf("delete record successfully.....");
    //   break;
    // case 5:

    //   fptr = fopen("H:\\C-training\\Library Management Project\\Mechanical.txt", "a+");
    //   fptr1 = fopen("H:\\C-training\\Library Management Project\\MechanicalCopy.txt", "w+");
    //   if (fptr == NULL || fptr1 == NULL)
    //   {
    //     printf("record is not exist...");
    //   }

    //   while (1)
    //   {
    //     if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
    //     {

    //       if (b1.bookId != did)
    //       {

    //         fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
    //       }
    //       else
    //       {
    //         printf("File read error@@@@@");
    //         break;
    //       }
    //     }
    //   }
    //   fclose(fptr);
    //   fclose(fptr1);

    //   remove("H:\\C-training\\Library Management Project\\Mechanical.txt");
    //   rename("H:\\C-training\\Library Management Project\\MechanicalCopy.txt", "H:\\C-training\\Library Management Project\\Mechanical.txt");
    //   printf("delete record successfully.....");
    //   break;
    //  case 6:

    //   fptr = fopen("H:\\C-training\\Library Management Project\\Architecture.txt", "a+");
    //   fptr1 = fopen("H:\\C-training\\Library Management Project\\ArchitectureCopy.txt", "w+");
    //   if (fptr == NULL || fptr1 == NULL)
    //   {
    //     printf("record is not exist...");
    //   }

    //   while (1)
    //   {
    //     if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
    //     {

    //       if (b1.bookId != did)
    //       {

    //         fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
    //       }
    //       else
    //       {
    //         printf("File read error@@@@@");
    //         break;
    //       }
    //     }
    //   }
    //   fclose(fptr);
    //   fclose(fptr1);

    //   remove("H:\\C-training\\Library Management Project\\Architecture.txt");
    //   rename("H:\\C-training\\Library Management Project\\ArchitectureCopy.txt", "H:\\C-training\\Library Management Project\\Architecture.txt");
    //   printf("delete record successfully.....");
    //   break;

  default:
    printf("\nInvalid Input....");
    break;
  }
}

// fptr = fopen("H:\\C-training\\Library Management Project\\Computer.txt", "a+");
// fptr1 = fopen("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "w+");
// if (fptr == NULL || fptr1 == NULL)
// {
//   printf("record is not exist...");
// }

// while (1)
// {
//   if (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
//   {

//     if (b1.bookId != did)
//     {

//       fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
//     }
//     else
//     {
//       printf("File read error@@@@@");
//       break;
//     }
//   }

//   fclose(fptr);
//   fclose(fptr1);

//   remove("H:\\C-training\\Library Management Project\\Computer.txt")
//       rename("H:\\C-training\\Library Management Project\\ComputerCopy.txt", "H:\\C-training\\Library Management Project\\Computer.txt");
//   printf("delete record successfully.....");