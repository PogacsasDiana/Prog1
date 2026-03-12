#include <stdio.h>

void abszolut(int t[], int m)
{
    for (int i = 0; i < m; i++)
    {
        if (t[i] < 0)
        {
            t[i] = t[i] * (-1);
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int tomb[] = {2, 4, 5, 3, -3, -7, 9, 8};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    printf("Eredeti: ");
    for (int i = 0; i < meret; i++)
    {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    abszolut(tomb, meret);
    printf("Új: ");
    for (int i = 0; i < meret; i++)
    {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    return 0;
}
