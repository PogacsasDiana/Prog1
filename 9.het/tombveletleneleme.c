#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[]) {
    
    int random_index = rand() % n;
    
    return tomb[random_index];
}

int main() {
    srand(time(NULL));

    int teszt_tomb[] = {10, 25, 47, 82, 99};
    int meret = 5;

    printf("A tömb elemei: 10, 25, 47, 82, 99\n");
    printf("--- Véletlenszerű választások ---\n");

    printf("1. választott elem: %d\n", choice(meret, teszt_tomb));
    printf("2. választott elem: %d\n", choice(meret, teszt_tomb));
    printf("3. választott elem: %d\n", choice(meret, teszt_tomb));

    return 0;
}