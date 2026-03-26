#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"

int main(int argc, char const *argv[])
{
    int a = 1;
    int tomb[100] = {};
    int count = 0;
    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    while (1)
    {
        printf("Szám: ");
        scanf("%d", &a);

        if (a == 0)
        {
            break; 
        }
        

        if (a < 0 || a >= 100)
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
        }
        else
        {
            if (tomb[a] == 0)
            {
                tomb[a] = 1;
                count++;
            }
            
        }
    }

    printf("%d db különböző szám lett megadva.\n", count);
    printf("Ezek (növekvő sorrendben): ");
    for (int i = 1; i < 100; i++)
    {
        if (tomb[i] == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
