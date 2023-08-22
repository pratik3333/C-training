#include <stdio.h>
void main()
{
    struct player
    {
        int id;
        char name[10];
        int matches;
        int runs;
    };

    struct player P[5];
    printf("\nEnter five details of 5 player\n");
    for (int i = 0; i <5; i++)
    {
        printf("\nEnter name, id, matches and runs\n");
        scanf("%s %d %d %d",P[i].name,&P[i].id,&P[i].matches,&P[i].runs);
    }
    
    printf("\nDisplay the detail of players\n");
    for (int i = 0; i <5; i++)
    {
        printf("%s %d %d %d",P[i].name,P[i].id,P[i].matches,P[i].runs);
        printf("\n");
    }
    
}