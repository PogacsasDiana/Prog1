#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int benne_van(int tomb[], int meret, int szam)
{
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] == szam) return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int a = 0;
    int also = 0;
    int felso = 0;
    int tomb[1000];
    srand(time(NULL));
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &a);

    printf("Alsó határ: ");
    scanf("%d", &also);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    int i = 0;
    while (i < a)
    {
        int r = rand() % (felso - also + 1) + also;

        if (!benne_van(tomb, i, r))
        {
            tomb[i] = r;
            i++;
        }
    }


    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (tomb[j] > tomb[j+1])
            {
                int temp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = temp;
            }
            
        }
        
    }
    
    

    printf("A generált számok: ");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", tomb[i]);
    }
    
    printf("\n");

    return 0;
}
