// There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is JAR can contain maximum N 
// candies when JAR is full. At any point of time. JAR can have M number of Candies where M<=N. Candies are served to 
// the customers. JAR is never remain empty as when last k candies are left. JAR if refilled with new candies in such a way 
// that JAR get full.
// Write a code to implement above scenario. Display JAR at counter with available number of candies. Input should be the 
// number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at 
// Counter.
// Output should give number of Candies sold and updated number of Candies in JAR.
// If Input is more than candies in JAR, return: “INVALID INPUT”
// Given,
// N=10, where N is NUMBER OF CANDIES AVAILABLE
// K =< 5, where k is number of minimum candies that must be inside JAR ever.
// Example 1:(N = 10, k =< 5)
// • Input Value
// o 3 • Output Value
// o NUMBER OF CANDIES SOLD : 3
// o NUMBER OF CANDIES AVAILABLE : 7
// Example : (N=10, k<=5)
// • Input Value
// o 0 • Output Value
// o INVALID INPUT
// o NUMBER OF CANDIES LEFT : 10

#include <stdio.h>
#include <conio.h>
void main()
{
    int no,k,c=10;
    printf("How much candies you want: ");
    scanf("%d",&no);

    if (no>c)
    {
        printf("you dont have permission to buy more than 10 candies");
    }
    else if (no<=10 && no<6)
    {
        printf("\nNumber of candies sold %d",no);
        printf("\nNumber of candies available %d",c-no);
    }
    else if (no>5)
    {
        printf("\nYou can buy maximum 5 candies");
    }
    
    else if (no==0)
    {
        printf("\nInvalid Input");
        printf("\nNumber of candies left",c);
    }
    
    else
    {
        printf("Invalid Input");
    }
    
}