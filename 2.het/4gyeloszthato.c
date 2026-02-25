#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    printf("Kérlek add meg meddig adjuk meg a 4gyel osztható számokat: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        if(i % 4 == 0)
        {
            printf("%d\n", i);
        }
    }
    

    return 0;
}
