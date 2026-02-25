#include <stdio.h>

int main(int argc, char const *argv[])
{
    int osszeg = 0;
    
    for (int i = 1; i < 1000; i++)
    {
        if (i % 5 == 0 || i % 3 == 0)
        {
            osszeg += i;
        }
        
    }

    printf("Az 1000nél kisebb számok összege, ami 3nak vagy 5nek a többszöröse: %d\n", osszeg);
    
    return 0;
}
