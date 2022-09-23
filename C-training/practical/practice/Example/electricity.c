// Write a C program to input electricity unit charge and calculate the total 
// electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
// How to calculate electricity bill using if else in C programming. Program to 
// find electricity bill using if else in C. Logic to find net electricity bill in C 
// program

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int units;
    float amount,totalamount,surcharge;
    printf("Please enter the electricity consumed: ");
    scanf("%d",&units);

    if (units<=50)
    {
        amount=units*0.50;
    }
    else if (units<=150)
    {
        amount=25+((units-50)*0.75);
    }
    else if (units<=250)
    {
        amount=100+((units-150)*1.20);
    }
    else{
        amount=220+((units-250)*1.50);
    }
    

    surcharge=amount*0.20;
    totalamount=amount+surcharge;
    printf("Electricity bill is %.2f",totalamount);
    
    
    
    return 0;
}
