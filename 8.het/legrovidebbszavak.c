#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        printf("Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }

    char* legrovidebb[1000];
    int db = 0;

    int min_hossz = strlen(argv[1]);

    for (int i = 1; i < argc; i++)
    {
        int hossz = strlen(argv[i]);

        if (hossz < min_hossz)
        {
            min_hossz = hossz;
            db = 0; 
            legrovidebb[db++] = argv[i];
        }
        else if (hossz == min_hossz)
        {
            legrovidebb[db++] = argv[i];
        }
    }

    printf("Legrövidebb szavak:\n");
    for (int i = 0; i < db; i++)
    {
        printf("%s\n", legrovidebb[i]);
    }

    return 0;
}