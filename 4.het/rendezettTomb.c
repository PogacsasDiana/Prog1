#include <stdio.h>

int rendezett(int t1[], int meret)
{
    for (int i = 0; i < meret-1; i++)
    {
        
        if (t1[i] > t1[i+1])
        {
            
            return printf("Rendezetlen\n");
        }
        
    }
    return printf("Rendezett\n");
    
}

int main(int argc, char const *argv[])
{
    int m1 = 12;
    int m2 = 13;
    int tomb[12] = {1,2,3,3,5,6,7,8,10,11,13,18};
    int tomb2[13] = {2,3,4,5,9,5,7,1,2,4,4,13,11};

    rendezett(tomb, m1);
    rendezett(tomb2, m2);

    return 0;
}
