#include <stdio.h>
int main(int argc, char const *argv[])
{
    int temp;
    printf("Enter the temperature: ");
    scanf("%d",temp);
    (temp<0)?printf("Freezing weather")(temp 0-10)?printf("Very cold weather"):printf("Something went wrong");
    return 0;
}
