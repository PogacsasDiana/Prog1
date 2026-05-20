#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg a bemeneti fájl nevét!\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "Hiba! A %s nevű fájlt nem sikerült megnyitni!\n", argv[1]);
        return 2;
    }

    int ch;
    int jelenlegi_sor_szama = 1;
    int jelenlegi_sor_hossza = 0;

    int leghosszabb_sor_indexe = 0;
    int leghosszabb_sor_hossza = -1; 

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            if (jelenlegi_sor_hossza > leghosszabb_sor_hossza) {
                leghosszabb_sor_hossza = jelenlegi_sor_hossza;
                leghosszabb_sor_indexe = jelenlegi_sor_szama;
            }
            
            jelenlegi_sor_szama++;
            jelenlegi_sor_hossza = 0;
        } else {
            jelenlegi_sor_hossza++;
        }
    }

    if (jelenlegi_sor_hossza > 0) {
        if (jelenlegi_sor_hossza > leghosszabb_sor_hossza) {
            leghosszabb_sor_hossza = jelenlegi_sor_hossza;
            leghosszabb_sor_indexe = jelenlegi_sor_szama;
        }
    }

    fclose(file);

    if (leghosszabb_sor_indexe != 0) {
        printf("%d %d\n", leghosszabb_sor_indexe, leghosszabb_sor_hossza);
    } else {
        printf("A fájl üres volt.\n");
    }

    return 0;
}