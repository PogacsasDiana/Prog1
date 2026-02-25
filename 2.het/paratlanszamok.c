#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    printf("Kérlek adj meg egy pozitív egész számot, honnan számoljunk visszafelé: ");
    scanf("%d",&n);

    for (int i = n; i >= 1; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
        
    }
    

    return 0;
}
