// #include <stdio.h>
#include "productp.h"
void addproduct(struct product p)
{

    FILE *fptr;
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\test1\\database.txt", "a+");
    fprintf(fptr,"%s\t%d\t%d\n",p.name,p.id,p.price);
    fclose(fptr);
    printf("\nData save succesfully....");
}