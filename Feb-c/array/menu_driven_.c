// create menu driven program.

#include<stdio.h>
void main()
{
    int a[10],ch,i,j,no,temp;
    printf("Enter the 5 elements of array: \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the 1 for Display elements: ");
    printf("\nEnter the 2 for inserting value at start: ");
    printf("\nEnter the 3 for inserting value at specific index: ");
    printf("\nEnter the 4 for inserting value at end of the array: ");
    printf("\nEnter the 5 for serach element by index: ");
    printf("\nEnter the 6 for search element by value: ");
    printf("\nEnter the 7 for delete element at the start: ");
    printf("\nEnter the 8 for delete element at specific index: ");
    printf("\nEnter the 9 for delete element at end: ");

    printf("\n Enter your choice: \n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\n Display array: \n");
        for ( i = 0; i <5; i++)
        {
            printf("\t%d",a[i]);
        }
    case 2:
       printf("\ntype value: \n");
       scanf("%d",&no);
    //    a[0]=no;
       
       for ( i = 0; i < 6; i--)
       {
          temp=a[i];
          a[i+1]=a[i];
          a[i]=temp;
          
           printf("%d\t",a[i]);
        
       }
       
    
    }
}