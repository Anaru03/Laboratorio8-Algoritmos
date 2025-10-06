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

int main() {
    int n_values[] = {1, 10, 100, 1000, 10000};
    int num_values = sizeof(n_values) / sizeof(n_values[0]);
    clock_t start, end;
    double cpu_time_used;

    printf("===========================================\n");
    printf("  Resultados del Ejercicio 1\n");
    printf("  Complejidad Teorica: O(n^2 log n)\n");
    printf("===========================================\n\n");

    printf("%-15s %-25s\n", "Size (n)", "Tiempo (segundos)");
    printf("-------------------------------------------\n");
