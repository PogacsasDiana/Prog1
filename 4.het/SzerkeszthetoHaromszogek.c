#include <stdio.h>

int valid_triangle(double a, double b, double c)
{
    if (a < 0 || b < 0 || c < 0)
    {
        printf("Pozitív számot adjon meg!\n");
        return 0;
    }

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        return printf("1\n");
    }
    
    return printf("0\n");
}

int main(int argc, char const *argv[])
{
    double a = 0;
    double b = 0;
    double c = 0;
    printf("Adja meg a háromszög 'a' oldalát: ");
    scanf("%lf", &a);
    printf("Adja meg a háromszög 'b' oldalát: ");
    scanf("%lf", &b);
    printf("Adja meg a háromszög 'c' oldalát: ");
    scanf("%lf", &c);

    valid_triangle(a,b,c);

    return 0;
}
