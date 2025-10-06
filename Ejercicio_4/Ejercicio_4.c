#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Mejor caso
    int x = 1;  // primer elemento
    printf("Mejor caso: posición = %d\n", linearSearch(arr, n, x));

    // Caso promedio
    x = 3;  // elemento del medio
    printf("Caso promedio: posición = %d\n", linearSearch(arr, n, x));

    // Peor caso
    x = 6;  // elemento que no existe
    printf("Peor caso: posición = %d\n", linearSearch(arr, n, x));

    return 0;
}
