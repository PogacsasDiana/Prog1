#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    printf("Hány db számot szeretnél bevinni?\n");
    scanf("%d", &a);

    int ftomb[a];

    for (int i = 1; i <= a; i++)
    {
        printf("%d. szám: ", i);
        scanf("%d", &ftomb[i-1]);
    }

    int stomb[a];

    for (int i = 0; i < a; i++)
    {
        stomb[i] = ftomb[i];
    }
    
    
    for (int i = 0; i < a; i++)
    {
        if (stomb[i] < 0)
        {
            stomb[i] = stomb[i] * -1;
        }
        
    }

    printf("A bevitt számok abszolútértékei: ");
    for (int i = 0; i < a-1; i++)
    {
        printf("%d, ", stomb[i]);
    }
    printf("%d\n", stomb[a-1]);

    printf("A megadott számok: ");
    for (int i = 0; i < a-1; i++)
    {
        printf("%d, ", ftomb[i]);
    }
    printf("%d\n", ftomb[a-1]);
    

    return 0;
}
