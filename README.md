# Laboratorio 8 – Algoritmos

Universidad del Valle de Guatemala – Facultad de Ingeniería

---

## Ejercicio 1 – Función con triple bucle

### Código

Archivo: `Ejercicio_1.c`

### Función

```c
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
```

### Complejidad

O(n^2 log n)

### Resultados (CSV: `results.csv`)

| n       | Tiempo (s) |
| ------- | ---------- |
| 1       | 0.000000   |
| 10      | 0.000000   |
| 100     | 0.000000   |
| 1000    | 0.007      |
| 10000   | 0.927      |
| 50000   | 23.0       |
| 100000  | 115.0      |
| 1000000 | 13900.0    |

### Gráfica

Análisis:
Los tiempos crecen de forma cuadrática-logarítmica como se esperaba según la complejidad O(n² log n). Para los valores muy grandes se usaron estimaciones para evitar tiempos de ejecución muy largos.

---

## Ejercicio 2 – Función con doble bucle y break

### Código

Archivo: `Ejercicio_2.c`

### Función

```c
void function(int n) {
    if (n <= 1) return;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            break;
        }
    }
}
```

### Complejidad

O(n)

### Resultados (CSV: `results2.csv`)

| n       | Tiempo (s) |
| ------- | ---------- |
| 1       | 0.000000   |
| 10      | 0.000000   |
| 100     | 0.000000   |
| 1000    | 0.000000   |
| 10000   | 0.000000   |
| 100000  | 0.001000   |
| 1000000 | 0.003000   |

### Gráfica

Análisis:
El tiempo crece linealmente con n, confirmando la complejidad O(n).

---

### Instrucciones de ejecución

1. Compilar los programas:

```bash
gcc Ejercicio_1.c -o Ejercicio_1
gcc Ejercicio_2.c -o Ejercicio_2
```

2. Ejecutar y generar CSV:

```bash
./Ejercicio_1
./Ejercicio_2
```

3. Graficar los resultados con Python:

```bash
python graficar_ejercicio1.py
python graficar_ejercicio2.py
```