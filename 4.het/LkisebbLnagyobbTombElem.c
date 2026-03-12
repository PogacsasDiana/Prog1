#include <stdio.h>

int legkisebb(int t[], int m)
{
    int kicsi = t[0];
    for (int i = 0; i < m-1; i++)
    {
        if (t[i] < kicsi)
        {
            kicsi = t[i];
        }
        
    }
    return printf("Legkisebb: %d\n", kicsi);
    
}

int legnagyobb(int t[], int m)
{
    int nagy = t[0];
    for (int i = 0; i < m-1; i++)
    {
        if (t[i] > nagy)
        {
            nagy = t[i];
        }
        
    }
    return printf("Legnagyobb: %d\n", nagy);
}

int main(int argc, char const *argv[])
{
    int tomb[] = {2,1,4,7,3,8,10,11,9,6};
    int meret = 10;

    legkisebb(tomb, meret);
    legnagyobb(tomb, meret);

    return 0;
}
