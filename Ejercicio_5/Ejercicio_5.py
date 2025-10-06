import time

# --- Incisos a y b ---
print("Incisos a y b – Justificación usando Python\n")

print("Tabla de f(n), g(n), h(n):")
print("n\tf(n)\tg(n)\th(n)")
for n in range(1, 11):
    f = 2*n      # Θ(n)
    g = 3*n      # Θ(n)
    h = 4*n      # Θ(n)
    print(f"{n}\t{f}\t{g}\t{h}")

print("\nObservaciones:")
print("→ a) Θ es transitiva → h(n) = Θ(f(n)) ✅")
print("→ b) O encadena → h(n) = Ω(f(n)) ✅\n")

# --- Inciso c ---
print("Inciso c – Complejidad del programa con tuplas\n")

def A(n):
    atupla = tuple(range(n))
    S = set()
    for i in range(n):
        for j in range(i+1, n):
            S.add(atupla[i:j])

for n in [10, 50, 100, 200]:
    start = time.time()
    A(n)
    end = time.time()
    print(f"n={n}, tiempo={end-start:.6f} s")

print("\nObservación: el tiempo crece aproximadamente como n², no n! ❌")
