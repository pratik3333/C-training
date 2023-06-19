#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    long int first, last, no, p, p1, count = 0, temp;

    printf("Enter the number: ");
    scanf("%ld", &no);

    temp = no;
    while (no != 0)
    {
        no = no / 10;
        ++count;
    }
    no = temp;
    last = no % 10;
    p = pow(10, --count);
    first = no / p;
    no = no / 10;
    p1 = pow(10, --count);
    no = no % p1;
    no = last * p + no * 10 + first;
    printf("After swapping no %ld", no);
}