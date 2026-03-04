#include <stdio.h>

int fibo(int n)
{
    int elso = 1;
    int masodik = 1;
    int hanyadik = 0;
    if (n == 1)
    {
        hanyadik = elso;
    }
    else if (n == 2)
    {
        hanyadik = masodik;
    }
    else
    {

        for (int i = 0; i < n - 2; i++)
        {
            hanyadik = elso + masodik;
            elso = masodik;
            masodik = hanyadik;
        }
        
    }
    return (printf("%d\n", hanyadik));
    
}

int main(int argc, char const *argv[])
{

    for (int j = 1; j <= 100; j++)
    {
        fibo(j);
    }

    return 0;
}
