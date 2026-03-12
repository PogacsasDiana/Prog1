#include <stdio.h>

int kulonbseg(int t[], int m)
{
    int osszeg = 0;
    int kul = 0;
    for (int i = 0; i < m-1; i++)
    {
        if (t[i+1] > t[i])
        {
            kul = t[i+1] - t[i];
        }
        else
        {
            kul = t[i] - t[i+1];
        }
        osszeg = osszeg + kul;
    }
    return printf("%d\n", osszeg);
}


int main(int argc, char const *argv[])
{
    int tomb[7] = {2,4,8,3,9,7,1};
    int meret = 7;
    

    kulonbseg(tomb, meret);

    return 0;
}
