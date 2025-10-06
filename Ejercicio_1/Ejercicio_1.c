#include <stdio.h>
#include <time.h>
#include <math.h> // para log2

// Función original del ejercicio
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

// Función para estimar el tiempo usando O(n^2 log n)
double estimate_time(int n, double c) {
    return c * n * n * log2(n);
}

int main() {
    // Valores reales que se ejecutarán
    int n_values[] = {1, 10, 100, 1000, 10000, 50000};
    // Valores grandes que se estimarán
    int n_est[] = {100000, 1000000};
    int num_values = sizeof(n_values) / sizeof(n_values[0]);
    int num_est = sizeof(n_est) / sizeof(n_est[0]);

    clock_t start, end;
    double cpu_time_used;
    double c = 0.0; // constante para estimación

    FILE *fp = fopen("results.csv", "w");
    if (fp == NULL) {
        printf("Error al crear el archivo CSV.\n");
        return 1;
    }

    fprintf(fp, "Tamaño(n),Tiempo(segundos)\n");

    // Medir tiempos reales
    for (int i = 0; i < num_values; i++) {
        int n = n_values[i];
        start = clock();
        function(n);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        fprintf(fp, "%d,%f\n", n, cpu_time_used);
        printf("n=%d, tiempo=%f segundos\n", n, cpu_time_used);

        // Calcular constante usando el último valor real
        if (i == num_values - 1) {
            c = cpu_time_used / (n * n * log2(n));
        }
    }

    // Estimar tiempos para n grandes
    for (int i = 0; i < num_est; i++) {
        int n = n_est[i];
        cpu_time_used = estimate_time(n, c);
        fprintf(fp, "%d,%f\n", n, cpu_time_used);
        printf("n=%d (estimado), tiempo=%f segundos\n", n, cpu_time_used);
    }

    fclose(fp);
    printf("Resultados guardados en results.csv (reales y estimados)\n");
    return 0;
}
