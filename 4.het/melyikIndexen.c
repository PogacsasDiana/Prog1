#include <stdio.h>

int indexelo(int t[], int m, int szam)
{
    for (int i = 0; i < m; i++)
    {
        if (t[i] == szam)
        {
            return printf("Itt helyezkedik el: %d\n", i);
        }
        
    }
    return printf("Nem található a tömbben.\n");
}

int main(int argc, char const *argv[])
{
    int a = 0;
    printf("Adja meg a számot: ");
    scanf("%d", &a);

    int tomb[] = {1,2,3,4,5,6,7,8,9,10};
    int meret = 10;

    indexelo(tomb, meret, a);
    
    return 0;
}
