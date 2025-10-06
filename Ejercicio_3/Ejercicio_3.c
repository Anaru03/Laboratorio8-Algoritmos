#include <stdio.h>
#include <time.h>

void function(int n) {
    int i, j;
    for (i = 1; i <= n/3; i++) {
        for (j = 1; j <= n; j+=4) {
            // printf("Sequence\n"); // opcional, se comenta para no llenar consola
        }
    }
}

int main() {
    int n_values[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    int num_values = sizeof(n_values) / sizeof(n_values[0]);
    clock_t start, end;
    double cpu_time_used;

    FILE *fp = fopen("results3.csv", "w");
    if (fp == NULL) {
        printf("Error al crear el archivo CSV.\n");
        return 1;
    }

    fprintf(fp, "Tamaño(n),Tiempo(segundos)\n");

    for (int i = 0; i < num_values; i++) {
        int n = n_values[i];
        start = clock();
        function(n);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

        fprintf(fp, "%d,%f\n", n, cpu_time_used);
        printf("n=%d, tiempo=%f segundos\n", n, cpu_time_used);
    }

    fclose(fp);
    printf("Resultados guardados en results3.csv\n");

    return 0;
}
