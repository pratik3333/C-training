#include <stdio.h>
void main()
{
    void countdigit(no);
    void reverse(no);
    void sumdigit(no);
    void swapfirstlast(no);
    void swapmiddle(no);

    int no, choice;
    printf("\nEnter the number\n");
    scanf("%d", &no);

    printf("\n\nEnter 1 for counting digit of number");
    printf("\nEnter 2 for reverse the number");
    printf("\nEnter 3 for sum of digit");
    printf("\nEnter 4 for swapping first and last digit of number");
    printf("\nEnter 5 for first and middle of number");

    printf("\n\nEnter the choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        countdigit(no);
        break;

    case 2:
        reverse(no);
        break;

    case 3:
        sumdigit(no);
        break;

    case 4:
        swapfirstlast(no);
        break;

    case 5:
        swapmiddle(no);
        break;

    default:
        printf("\nInvalid Input");
        break;
    }
}

void countdigit(no)
{
    int count = 0;
    while (no != 0)
    {
        no = no / 10;
        count++;
    }
    printf("\ncount of digit is %d", count);
}
void reverse(no)
{
    int rev = 0, rem;
    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
        rev = rev * 10 + rem;
    }
    printf("\nReverse number is %d", rev);
}
void sumdigit(no)
{
    int sum = 0, rem;

    while (no != 0)
    {
        rem = no % 10;
        sum = sum + rem;
        no = no / 10;
    }
    printf("\nSum of digit is %d", sum);
}
void swapfirstlast(no)
{
    int first,last,temp;
    temp=no;
    
    last=no%10;

    while (no>=10)
    {
        no=no/10;
    }
    first=no;
    printf("%d %d",first,last);
    
    
}

void swapmiddle(no)
{
}