#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char KISBETUK[] = "abcdefghijklmnopqrstuvwxyz";
const char NAGYBETUK[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char SZAMOK[] = "0123456789";
const char SPECIALIS[] = ".,;'";

void shuffle_password(int n, char tomb[]) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

int main() {

    srand(time(NULL));

    int jelszo_hossz = (rand() % 5) + 8;
    char jelszo[13]; 

    int index = 0;

    jelszo[index++] = KISBETUK[rand() % strlen(KISBETUK)];
    jelszo[index++] = NAGYBETUK[rand() % strlen(NAGYBETUK)];
    jelszo[index++] = SZAMOK[rand() % strlen(SZAMOK)];
    jelszo[index++] = SPECIALIS[rand() % strlen(SPECIALIS)];

    const char OSSZES_KARAKTER[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;'";
    int osszes_meret = strlen(OSSZES_KARAKTER);

    while (index < jelszo_hossz) {
        jelszo[index++] = OSSZES_KARAKTER[rand() % osszes_meret];
    }

    jelszo[index] = '\0';

    shuffle_password(jelszo_hossz, jelszo);

    printf("%s\n", jelszo);

    return 0;
}