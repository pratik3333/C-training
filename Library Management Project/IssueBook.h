#include "struIssueBookName.h"
void issueBooks()
{
//	time_t t;
	// t=time(NULL);
  struct IssuedBookList b1;
	FILE *fptr;
    fptr=fopen("H:\\C-training\\Library Management Project\\BookIssue.txt","a+");
    printf("\nStudent Id : ");
    scanf("%d",&b1.id);
    printf("\nEnterr student name : ");
    _flushall();
    gets(b1.studentName);
    printf("\nBook Name : ");
    // _flushall();
    gets(b1.bookName);
    printf("\nIssued Date : ");
    // _flushall();
    gets(b1.date);
//     b1.tm=*localtime(&t);
    fprintf(fptr,"\n%d\t%s\t%s\t%s\n",b1.id,b1.studentName,b1.bookName,b1.date);
    fclose(fptr);
}