#include <stdio.h>

int linearSearchStepByStep(int arr[], int n, int x) {
    printf("Buscando %d en el arreglo...\n", x);
    for (int i = 0; i < n; i++) {
        printf("Comparando x con A[%d] = %d\n", i, arr[i]);
        if (arr[i] == x) {
            printf("¡Elemento encontrado en la posición %d!\n", i);
            return i;
        }
    }
    printf("Elemento no encontrado.\n");
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Mejor caso
    printf("\n--- Mejor caso ---\n");
    linearSearchStepByStep(arr, n, 1);

    // Caso promedio
    printf("\n--- Caso promedio ---\n");
    linearSearchStepByStep(arr, n, 3);

    // Peor caso
    printf("\n--- Peor caso ---\n");
    linearSearchStepByStep(arr, n, 6);

    return 0;
}
