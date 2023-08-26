
void viewBookList()
{
	FILE *fptr;
	struct struAddBook b;

	printf("\n\t\t\tComputer Department\n\n");

	fptr = fopen("H:\\C-training\\Library Management Project\\Computer.txt", "a+");

	while (fread(&b,sizeof(struct struAddBook),1,fptr))
	{
		printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
	}
	fclose(fptr);
	// ////////////////////////////////////////////////////////////////////////////////////////
	printf("\n\t\t\tElectrical Department\n\n");

	fptr = fopen("H:\\C-training\\Library Management Project\\Electrical.txt", "a+");
    while (fread(&b,sizeof(struct struAddBook),1,fptr))
	{
		printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
	}
	fclose(fptr);

	// ////////////////////////////////////////////////////////////////////////////////////

	printf("\n\t\t\tCivil Department\n\n");

	fptr = fopen("H:\\C-training\\Library Management Project\\Civil.txt", "a+");

	 while (fread(&b,sizeof(struct struAddBook),1,fptr))
	{
		printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
	}
	fclose(fptr);

	// ////////////////////////////////////////////////////////////////////////////////////

	printf("\n\t\t\tElectronics Department\n\n");

	fptr = fopen("H:\\C-training\\Library Management Project\\Electronics.txt", "a+");

	 while (fread(&b,sizeof(struct struAddBook),1,fptr))
	{
		printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
	}
	fclose(fptr);

	// ////////////////////////////////////////////////////////////////////////////////////
	printf("\n\t\t\tMechanical Department\n\n");

	fptr = fopen("H:\\C-training\\Library Management Project\\Mechanical.txt", "a+");

	 while (fread(&b,sizeof(struct struAddBook),1,fptr))
	{
		printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
	}
	fclose(fptr);

	// ////////////////////////////////////////////////////////////////////////////////////
	printf("\n\t\t\tArchitecture Department\n\n");

	fptr = fopen("H:\\C-training\\Library Management Project\\Architecture.txt", "a+");

	 while (fread(&b,sizeof(struct struAddBook),1,fptr))
	{
		printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
	}
	fclose(fptr);

	// ////////////////////////////////////////////////////////////////////////////////////
}