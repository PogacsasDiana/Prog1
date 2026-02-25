#include <stdio.h>

int main(int argc, char const *argv[])
{
    int osszeg=0;
    

    for (int i = 1; i < 101; i++)
    {
        osszeg += i;
        
    }
    printf("A számok összege 1től 100ig: %d\n", osszeg);

    return 0;
}
