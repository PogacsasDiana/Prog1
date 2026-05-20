#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[]) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        
        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

void print_array(int n, const int tomb[]) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", tomb[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {

    srand(time(NULL));

    int lista[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int meret = 8;

    printf("Eredeti tömb:\n");
    print_array(meret, lista);

    shuffle(meret, lista);
    printf("\nElső keverés után:\n");
    print_array(meret, lista);

    shuffle(meret, lista);
    printf("\nMásodik keverés után:\n");
    print_array(meret, lista);

    return 0;
}