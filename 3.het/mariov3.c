#include <stdio.h>

int main(int argc, char const *argv[])
{
    int magassag = 0;
    printf("Magasság: ");
    scanf("%d", &magassag);

    for (int i = 0; i < magassag; i++)
    {
        for (int j = 0; j < magassag - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("  ");

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
