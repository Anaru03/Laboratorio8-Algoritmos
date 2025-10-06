#include <stdio.h>
#include <time.h>

void function(int n) {
    int i, j, k, counter = 0;
    for (i = n / 2; i <= n; i++) {
        for (j = 1; j + n / 2 <= n; j++) {
            for (k = 1; k <= n; k = k * 2) {
                counter++;
            }
        }
    }
}
