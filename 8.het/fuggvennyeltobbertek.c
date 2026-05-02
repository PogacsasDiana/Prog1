#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void eljaras(int *t, int m, int *kicsi, int *nagy, double *atlag)
{
    *kicsi = 99;
    *nagy = 10;
    int osszeg = 0;
    *atlag = 0;
    for (int i = 0; i < m; i++)
    {
        if (t[i] < *kicsi)
        {
            *kicsi = t[i];
        }

        if (t[i] > *nagy)
        {
            *nagy = t[i];
        }
        
        osszeg += t[i];
    }
    *atlag = osszeg / m;

    
}


int main(int argc, char const *argv[])
{
    int also = 10;
    int felso = 99;
    srand(time(NULL));
    int tomb[10] = {};
    int meret = 10;

    for (int i = 0; i < 10; i++)
    {
        int r = rand() % (felso - also + 1) + also;
        tomb[i] = r;
    }

    printf("A tömb elemei: ");
    
    for (int i = 0; i < 9; i++)
    {
        printf("%d, ", tomb[i]);
    }

    for (int i = 9; i < 10; i++)
    {
        printf("%d\n", tomb[i]);
    }

    int kicsi, nagy;
    double atlag;
    
    eljaras(tomb, meret, &kicsi, &nagy, &atlag);

    printf("Legkisebb elem: %d\n", kicsi);
    printf("Legnagyobb elem: %d\n", nagy);
    printf("Az elemek átlaga: %.1lf\n", atlag);

    return 0;
}
