#include <stdio.h>
void main()
{
    int fees, x;
    float percentage;
    printf("\n Enter the Fees: ");
    scanf("%d", &fees);

    printf("\nEnter the percentage: ");
    scanf("%f", &percentage);

    if (percentage > 85)
    {
        x = fees * 0.25;
        fees = fees - x;
        printf("\nDiscount in fee is: %d", x);
        printf("\nActual fees: %d", fees);
    }
    else if (percentage >= 75 && percentage <= 85)
    {
        x = fees * 0.20;
        fees = fees - x;
        printf("\nDiscount in fee is: %d", x);
        printf("\nActual fees: %d", fees);
    }
    else if (percentage >= 65 && percentage < 75)
    {
        x = fees * 0.15;
        fees = fees - x;
        printf("\nDiscount in fee is: %d", x);
        printf("\nActual fees: %d", fees);
    }
    else if (percentage >= 55 && percentage < 65)
    {
        x = fees * 0.10;
        fees = fees - x;
        printf("\nDiscount in fee is: %d", x);
        printf("\nActual fees: %d", fees);
    }
    else
    {
        printf("No Discount");
         printf("\nActual fees: %d", fees);
    }
}