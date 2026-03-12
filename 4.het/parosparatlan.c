#include <stdio.h>

int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_odd(int n)
{
    if (is_even(n) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int a = 0;
    printf("Kérem a számot: ");
    scanf("%d", &a);

    printf("%d\n", is_even(a));
    printf("%d\n", is_odd(a));

    return 0;
}
