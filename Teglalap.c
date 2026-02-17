#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("Kérem adja meg a téglalap 'a' oldalát: \n");
    scanf("%d", &a);

    printf("Kérem adja meg a téglalap 'b' oldalát: \n");
    scanf("%d", &b);
    
    int ker = 2 * a + 2 * b;
    int ter = a * b;

    printf("A téglalap kerülete: %d\n", ker);
    printf("A téglalap területe: %d\n", ter);

    return 0;
}
