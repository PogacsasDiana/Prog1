#include <stdio.h>

#define CELL_COUNT 600

int main() {
    int ajtok[CELL_COUNT + 1] = {0}; 

    for (int lepes = 1; lepes <= CELL_COUNT; lepes++) {
        for (int cella = lepes; cella <= CELL_COUNT; cella += lepes) {
            ajtok[cella] = 1 - ajtok[cella];
        }
    }

    printf("Önellenőrzéshez: ");
    for (int cella = 1; cella <= CELL_COUNT; cella++) {
        if (ajtok[cella] == 1) {
            printf("%d", cella);
        }
    }
    printf("\n");

    printf("Olvasható kimenet: ");
    int elso = 1;
    for (int cella = 1; cella <= CELL_COUNT; cella++) {
        if (ajtok[cella] == 1) {
            if (!elso) {
                printf(", ");
            }
            printf("%d", cella);
            elso = 0;
        }
    }
    printf("\n");

    return 0;
}