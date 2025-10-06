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
    int n_values[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    int num_values = sizeof(n_values) / sizeof(n_values[0]);
    clock_t start, end;
    double cpu_time_used;

    FILE *fp = fopen("results.csv", "w");  // <-- archivo CSV
    if (fp == NULL) {
        printf("Error al crear el archivo CSV.\n");
        return 1;
    }

    fprintf(fp, "Tamaño(n),Tiempo(segundos)\n"); // encabezado CSV

    for (int i = 0; i < num_values; i++) {
        int n = n_values[i];
        start = clock();
        function(n);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

        fprintf(fp, "%d,%f\n", n, cpu_time_used);  // <-- guarda los resultados
    }

    fclose(fp);

    printf("Resultados guardados en results.csv\n");
    return 0;
}
