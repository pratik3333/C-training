#include <stdio.h>
#include <math.h>
void main()
{
    void duck(no);
    void armstrong(no);
    void palindrome(no);
    void strong(no);
    int no, choice;

    do
    {
        printf("\nEnter 1 for checking number is duck number or not: ");
        printf("\nEnter 2 for checking number is armstrong number or not: ");
        printf("\nEnter 3 for checking number is palindrome number or not: ");
        printf("\nEnter 4 for checking number is strong number or not: ");
        printf("\n\n if you want to quite the Enter any other kay except 1-4\n");

        printf("\n\nEnter the number\n");
        scanf("%d", &no);

        printf("\n\nEnter the choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            duck(no);
            break;

        case 2:
            armstrong(no);
            break;

        case 3:
            palindrome(no);
            break;

        case 4:
            strong(no);
            break;

        default:
            printf("\nThank you\n");
            break;
        }
    } while (choice > 0 && choice < 5);
}

void duck(no)
{
    int rem, flag = 0;
    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
        if (rem == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("\nNumber is a duck number\n");
    }
    else
    {
        printf("\nNumber is not a duck number\n");
    }
}

void armstrong(no)
{
    int count = 0, temp, i, p = 1, rem, sum = 0;
    temp = no;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = no;

    while (temp != 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        p = 1;
        for (i = 1; i <= count; i++)
        {
            p = p * rem;
        }
        // p=pow(rem,count);
        sum = sum + p;
    }

    if (no == sum)
    {
        printf("\nNumber is a armstrong number\n");
    }
    else
    {
        printf("\nNumber is a not armstrong number\n");
    }
}

void palindrome(no)
{
    int rem, rev = 0, temp;
    temp = no;
    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
        rev = rev * 10 + rem;
    }
    if (temp == rev)
    {
        printf("\nNumber is a palindrome number\n");
    }
    else
    {
        printf("\nNumber is not a palindrome number\n");
    }
}

void strong(no)
{
    int sum = 1, rem, temp, i, final = 0;
    temp = no;
    while (no != 0)
    {
        rem = no % 10;
        no = no / 10;
        sum = 1;
        for (i = 1; i <= rem; i++)
        {
            sum = sum * i;
        }

        final = final + sum;
    }

    if (temp == final)
    {
        printf("\nNumber is a strong number\n");
    }
    else
    {
        printf("\nNumber is not a strong number\n");
    }
}