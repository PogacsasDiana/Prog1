#include <stdio.h>
#include <stdlib.h>

#define MAX_CAPACITY 2000 

int compare(const void *a, const void *b) {
    int val1 = *(const int *)a;
    int val2 = *(const int *)b;
    
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

int main(int argc, char *argv[]) {

    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét parancssori argumentumként!\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "Hiba! A %s fájlt nem sikerült megnyitni!\n", argv[1]);
        return 2;
    }

    int numbers[MAX_CAPACITY];
    int count = 0;

    while (count < MAX_CAPACITY && fscanf(file, "%d", &numbers[count]) == 1) {
        count++;
    }

    fclose(file);

    if (count == 0) {
        fprintf(stderr, "A fájl nem tartalmazott beolvasható számot.\n");
        return 3;
    }

    qsort(numbers, count, sizeof(int), compare);

    for (int i = 0; i < count; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}