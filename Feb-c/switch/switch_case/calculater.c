#include<stdio.h>
#include<conio.h>

int main()
{
   int op;
   float first,second,add;
    printf("Enter two oprands: \n");
   scanf("%f %f", &first, &second);

   printf("1.for addition: \n");
   printf("2. for substraction: \n");
   printf("3. for multiplication: \n");
   printf("4. for division: \n");
   
   printf("Enter the switch case:\n");
   scanf("%d",&op);

  

   switch (op)
   {

   case 1:
    add=first+second;
    printf("The addition of two number is %f: ",add);
    break;

    case 2:
    printf("The substraction of two number is %f: ",first-second);
    break;

    case 3:
    printf("The multilpication of two number is %f: ",first*second);
    break;

    case 4:
    printf("The division of two number is %f : ",first/second);

   default:
        printf("Invalid input");
    //break;
   }
   return 0;
}