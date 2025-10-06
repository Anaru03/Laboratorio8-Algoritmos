import matplotlib.pyplot as plt
import csv

# Listas para almacenar los datos
n = []
tiempo = []

# Leer CSV
with open('results2.csv') as f:
    reader = csv.reader(f)
    next(reader)  # saltar encabezado
    for row in reader:
        n.append(int(row[0]))
        tiempo.append(float(row[1]))

# Crear la gráfica
plt.figure(figsize=(8,5))
plt.plot(n, tiempo, marker='o', linestyle='-', color='blue')
plt.xlabel('Tamaño de entrada (n)')
plt.ylabel('Tiempo (s)')
plt.title('Tiempo de ejecución vs Tamaño de entrada – Ejercicio 2')
plt.grid(True)

# Guardar la gráfica en un archivo
plt.savefig('grafica2.png')  # se guarda en la misma carpeta
plt.show()
