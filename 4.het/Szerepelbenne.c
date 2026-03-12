#include <stdio.h>

int contains(int t[], int m, int szam)
{
    for (int i = 0; i < m; i++)
    {
        if (t[i] == szam)
        {
            return printf("Szerepel benne\n");
        }
    }
    return printf("Nem szerepel benne\n");
}

int main(int argc, char const *argv[])
{
    int a = 0;
    printf("Melyik számot nézzük meg?: ");
    scanf("%d", &a);
    int tomb[] = {1,2,3,4,5,6,7,8,9,12};
    int meret = 10;

    contains(tomb, meret, a);
    
    return 0;
}
