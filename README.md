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

O(n² log n)

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

---

## Ejercicio 3 – Función con bucle for y salto de 4

### Código

Archivo: `Ejercicio_3.c`

```c
void function (int n) {
    int i, j;
    for (i=1; i<=n/3; i++) {
        for (j=1; j<=n; j+=4) {
            printf(“Sequence\n”);
        }
    }
}
```

### Complejidad

O(n²)

### Resultados (CSV: `results3.csv`)

| n       | Tiempo (s)        |
| ------- | ----------------- |
| 1       | 0.000000          |
| 10      | 0.000000          |
| 100     | 0.000000          |
| 1000    | 0.001000          |
| 10000   | 0.026000          |
| 100000  | 2.723000          |
| 1000000 | 267.041000        |

### Gráfica

## Ejercicio 4 – Búsqueda Lineal (Linear Search)

Encontrar el mejor caso, caso promedio y peor caso del algoritmo de
Búsqueda Lineal (Linear Search).

### Mejor, promedio y peor caso

| Caso          | Ejemplo búsqueda | Resultado     |
| ------------- | ---------------- | ------------- |
| Mejor caso    | x=1              | Posición 0    |
| Caso promedio | x=3              | Posición 2    |
| Peor caso     | x=6              | No encontrado |

Justificación paso a paso: El programa muestra cada comparación realizada hasta encontrar el elemento o terminar el arreglo.

---

## Ejercicio 5 – Verdadero/Falso y Justificación

### Resultados

* **Inciso a:** Verdadero ✅
* **Inciso b:** Verdadero ✅
* **Inciso c:** Falso ❌

---

### Instrucciones de ejecución (Ejercicios 3, 4 y 5)

1. Compilar C:

```bash
gcc Ejercicio_3.c -o Ejercicio_3
gcc Ejercicio_4.c -o Ejercicio_4
```

2. Ejecutar C y generar CSV:

```bash
./Ejercicio_3
./Ejercicio_4
```
* Si 𝑓(𝑛) = Θ(𝑔(𝑛)) y 𝑔(𝑛) = Θ(ℎ(𝑛)), entonces ℎ(𝑛) = Θ(𝑓(𝑛))
*  Si 𝑓(𝑛) = 0(𝑔(𝑛)) y 𝑔(𝑛) = 0(ℎ(𝑛)), entonces ℎ(𝑛) = Ω (𝑓(𝑛))
*  𝑓(𝑛) = Θ(n²) donde f(n) esta definido por ser el tiempo de ejecución del Python A(n).

3. Ejecutar Python para Ejercicio 5:

```bash
python Ejercicio_5.py
```

4. Graficar resultados (solo Ejercicio 3 tiene gráfica):

```bash
python graficar_ejercicio3.py
```
