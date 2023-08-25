void viewBookList()
{
	int flag=0,count=0,i=0;
	struct struAddBook b;
	struct struAddBook *b1;
	FILE *fptr;
    
    fptr=fopen("H:\\C-training\\Library Management Project\\bookDatabase.txt","a+");
	while(fscanf(fptr,"%d%s%s%d%d%d%d",&b.bookId,&b.bookname,&b.authorName,&b.bookQuantity,&b.bookPrice,&b.bookCount,&b.bookRackno)!=-1)
    {
    	count++;
	}	
	fclose(fptr);
	b1=(struct struAddBook*)malloc(sizeof(struct struAddBook)*count);
    fptr=fopen("H:\\C-training\\Library Management Project\\bookDatabase.txt","a+");
	while(fscanf(fptr,"%d%s%s%d%d%d%d",&b1[i].bookId,&b1[i].bookname,&b1[i].authorName,&b1[i].bookQuantity,&b1[i].bookPrice,&b1[i].bookCount,&b1[i].bookRackno)!=-1)
    {
    	i++;
	}
	fclose(fptr);
	for(i=0;i<count;i++)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b1[i].bookId,b1[i].bookname,b1[i].authorName,b1[i].bookQuantity,b1[i].bookPrice,b1[i].bookCount,b1[i].bookRackno);
	}
}