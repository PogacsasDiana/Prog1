#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *infile = fopen("in.txt", "r");
    if (infile == NULL) {
        fprintf(stderr, "Hiba! Az in.txt fajlt nem sikerult megnyitni!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");

    
    FILE *outfile = fopen("out.txt", "w");
    if (outfile == NULL) {
        fprintf(stderr, "Hiba! Az out.txt fajlt nem sikerult letrehozni!\n");
        fclose(infile); 
        return 2;
    }

    printf("# 0,5-nél nagyobb számok szűrése...\n");

    double number;
    int count = 0;

    while (fscanf(infile, "%lf", &number) == 1) {
        if (number > 0.5) {
            fprintf(outfile, "%.15lf\n", number);
            count++;
        }
    }

    printf("# szűrés vége\n");

    
    fclose(infile);
    fclose(outfile);
    printf("# out.txt bezárva\n");

    
    printf("# out.txt-be kiirt számok mennyisége: %d db\n", count);

    return 0;
}