#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Kérlek adj meg egy számot, meddig írjuk ki nyilakkal: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n - 1; i++)
    {
        printf(" %d ->", i);
    }

    printf(" %d\n", n);
    

    return 0;
}
