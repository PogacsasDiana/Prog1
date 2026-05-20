#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *file = fopen("valos_szamok.txt", "r");
    
    
    if (file == NULL) {
        fprintf(stderr, "Hiba! A valos_szamok.txt fajlt nem sikerult megnyitni!\n");
        return 1;
    }

    long double sum = 0.0;
    long double number;

    
    while (fscanf(file, "%Lf", &number) == 1) {
        sum += number;
    }

    
    fclose(file);

    
    printf("%.20Lf\n", sum);

    return 0;
}