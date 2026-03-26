#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"
#include <time.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int also = 0;
    int felso = 0;
    srand(time(NULL));
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &a);

    printf("Alsó határ: ");
    scanf("%d", &also);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    printf("A generált számok: ");
    for (int i = 0; i < a; i++)
    {
        int r = rand() % (felso - also + 1) + also;
        printf("%d ", r);
    }
    printf("\n");

    return 0;
}
