#include <stdio.h>

int main() {
    int max_num = 45;

    for (int a = 1; a <= max_num; a++) {
        for (int b = a + 1; b <= max_num; b++) {
            for (int c = b + 1; c <= max_num; c++) {
                for (int d = c + 1; d <= max_num; d++) {
                    for (int e = d + 1; e <= max_num; e++) {
                        for (int f = e + 1; f <= max_num; f++) {
                            
                            if (a + b + c + d + e + f == 90) {
                                
                                if (a * b * c * d * e * f == 996300) {
                                    printf("A heti nyerőszámok: %d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);
                                    return 0;
                                }
                            }
                            
                        }
                    }
                }
            }
        }
    }

    return 0;
}