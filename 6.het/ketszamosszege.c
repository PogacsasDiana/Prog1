#include <stdio.h>
#include <string.h>
#include "prog1.h"
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
        return 1;
    }

    int osszeg = atoi(argv[1]) + atoi(argv[2]);
    printf("%d\n", osszeg);
    
    return 0;
}
