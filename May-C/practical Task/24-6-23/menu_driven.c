#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i, choice, length;
    float area, r, width, height, base, side;
    printf("Enter the choice ");
    printf("\n\nEnter 1 for area of circle: ");
    printf("\nEnter 2 for area of rectangle: ");
    printf("\nEnter 3 for area of triangle: ");
    printf("\nEnter 4 for area of circumference: ");
    printf("\nEnter 1 for area of equilateral triangle: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter the radious of circle: ");
        scanf("%f", &r);
        area = (3.14 * r * r);
        printf("\nArea of circle is: %f", area);
        break;

    case 2:
        printf("\nEnter the length: ");
        scanf("%d", &length);
        printf("\nEnter the width: ");
        scanf("%d", &width);

        area = length * width;
        printf("\nArea of rectangle is %d", area);
        break;

    case 3:
        printf("Enter the Height of trianlge: ");
        scanf("%f", &height);
        printf("Enter the base: ");
        scanf("%f", &base);
        area = (height * base) / 2;
        printf("\nArea of triangle is : %f", area);
        break;

    case 4:
        printf("Enter the radius: ");
        scanf("%f", &r);

        area = 2 * 3.14 * r;
        printf("\n area of circumference is: %f", area);
        break;

    case 5:
        printf("Enter the side: ");
        scanf("%f", &side);
        area = (sqrt(3) / 4) * (side * side);
        printf("Area of equilateral triangle is: %d ", area);

    default:
        printf("Invalid Input");
        break;
    }
}