#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char *input) {
    int length = strlen(input);

    if (length == 0) {
        return 0;
    }

    if (!isalpha(input[0]) && input[0] != '_') {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (!isalnum(input[i]) && input[i] != '_') {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char const *argv[]) {
    char st[256];

    printf("Adj meg sztringeket '*' végjelig!\n");

    while (1) {
        printf("Input: ");
        
        if (scanf("%255s", st) != 1) {
            break;
        }

        if (strcmp(st, "*") == 0) {
            break;
        }

        if (is_valid_c_identifier(st)) {
            printf("YES\n\n");
        } else {
            printf("NO\n\n");
        }
    }

    return 0;
}