#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct ertekek
{
    int kicsi;
    int nagy;
    double atlag;
}ertek;


ertek fuggveny(int t[], int m)
{

    ertek adat;
    int kicsi = 99;
    int nagy = 10;
    int osszeg = 0;
    double atlag = 0;
    for (int i = 0; i < m; i++)
    {
        if (t[i] < kicsi)
        {
            kicsi = t[i];
        }

        if (t[i] > nagy)
        {
            nagy = t[i];
        }
        
        osszeg += t[i];
    }
    atlag = osszeg / m;

    adat.kicsi = kicsi;
    adat.nagy = nagy;
    adat.atlag = atlag;

    return adat;
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

    
    ertek fv = fuggveny(tomb, meret);
    printf("Legkisebb elem: %d\nLegnagyobb elem: %d\nAz elemek átlaga: %.1lf\n", fv.kicsi, fv.nagy, fv.atlag);

    return 0;
}
