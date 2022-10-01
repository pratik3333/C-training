// // ways to write the for loop

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i;
//     i=1;
//     for (; i <= 5; i++)
//     {
//         printf("Good morning\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i;
//     i=1;
//     printf("\n");

//     for(; i<=5;)
//     {
//         printf("Good morning\n");
//         i++;
//     }
//     return 0;
// }

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    i=1;
    printf("\n");

    for (; i <= 5;printf("Good morning\n"))
    {
        i++;
    }
    
    return 0;
}
