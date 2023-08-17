#include<stdio.h>
struct Player
{
    char name[90];
    int id;

};


void main()
{
    struct Player ply;
    printf("\nEnter player name : \n");
    scanf("%s",&ply.name);
    printf("\nEnter player id: \n");
    scanf("%d",&ply.id);
    

    printf("\nPlayer Name is %s",ply.name);
    printf("\nPlayer ID is %d",ply.id);

}