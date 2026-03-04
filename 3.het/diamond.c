#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = 0;
    printf("Magassag: ");
    scanf("%d", &m);

    if (m % 2 == 0)
    {
        printf("Hiba, páratlan számot adj meg.\n");
        return 1;
    }

    for (int i = 1; i <= m; i += 2)
    {
        for (int j = 0; j < (m - i) / 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = m - 2; i >= 1; i -= 2)
    {
        for (int j = 0; j < (m - i) / 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
