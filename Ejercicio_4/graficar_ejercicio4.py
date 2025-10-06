import matplotlib.pyplot as plt
import csv

n = []
tiempo = []

with open('results3.csv') as f:
    reader = csv.reader(f)
    next(reader)
    for row in reader:
        n.append(int(row[0]))
        tiempo.append(float(row[1]))

plt.figure(figsize=(8,5))
plt.plot(n, tiempo, marker='o', linestyle='-', color='green')
plt.xlabel('Tamaño de entrada (n)')
plt.ylabel('Tiempo (s)')
plt.title('Tiempo de ejecución vs Tamaño de entrada – Ejercicio 3')
plt.grid(True)
plt.savefig('grafica3.png')
plt.show()
