#define _USE_MATH_DEFINES;
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double r;

    printf("Kérem adja meg a kör sugarát: \n");
    scanf("%lf", &r);

    double ker = 2 * r * M_PI;
    double ter = r * r * M_PI;

    printf("A kör kerülete: %lf\n", ker);
    printf("A kör területe: %lf", ter);

    return 0;
}
