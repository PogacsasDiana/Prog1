#include <stdio.h>

void elemek(int t[], int m)
{
    for (int i = 0; i < m-1; i++)
    {
        printf("%d, ", t[i]);
    }
    
    printf("%d\n", t[m-1]);
    
}

int main(int argc, char const *argv[])
{
    int tomb[] = {1,2,3,4,5,6,7,8,9,10};
    int max = sizeof(tomb) / sizeof(tomb[0]);

    elemek(tomb, max); 
    return 0;
}
