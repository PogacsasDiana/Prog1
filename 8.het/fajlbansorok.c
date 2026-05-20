#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }

    
    char *filename = argv[1];

    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni!\n", filename);
        return 2;
    }

    int lines = 0;
    int ch;
    int last_ch = '\n';

    
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
        last_ch = ch;
    }

    
    if (last_ch != '\n') {
        lines++;
    }

    
    fclose(file);

    
    printf("%d\n", lines);

    return 0;
}