# [143] Tortitas

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=143)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.144 segs.` |
| **Memoria consumida** | `2096 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1137849` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-4,000 sMemoria máxima: 4096 KiB`

La especialidad de Michelón es hacer tortitas. En la cocina de
    su restaurante hace a diario muchísimas y las va colocando una
    encima de otra según las saca de la plancha. Le gusta ver variedad
    en su pila de tortitas, por lo que va haciéndolas de tamaños
    distintos.

Como la tortita que está más arriba se enfría mucho más rápido
	 que el resto, de vez en cuando mete la espátula entre dos tortitas
	 de la torre y las da la vuelta, de forma que la tortita que estaba
	 encima queda ahora en medio, y la tortita que estaba en medio,
	 queda la primera.

Tras una serie de volteos, ¿serías capaz de decir el tamaño de
	 la tortita que queda más arriba?


### Entrada

Cada caso de prueba contiene dos líneas. La primera describe la
situación inicial de la pila de tortitas. Contiene una sucesión de
números terminada con -1 que indica los tamaños de cada una
de las tortitas, empezando por el tamaño de la situada encima de la
mesa y terminando por la de más arriba. Todos los tamaños son
positivos, por lo que el -1 final no debe considerarse.

Una segunda línea describe los volteos que hace Michelón. El primer
número de la línea indica el número de volteos que hace. Le sigue un
número por cada movimiento, indicando el número de tortitas totales
que coge de golpe. Se garantiza que el número siempre es válido (es
decir, está entre 0 y el número total de tortitas).

La entrada termina con un caso de prueba sin tortitas.


### Salida

Por cada caso de prueba escribe el tamaño de la tortita que queda
arriba tras los movimientos de Michelón.


### Entrada de ejemplo

```text
5 4 3 2 1 -1
0
5 4 3 2 1 -1
2 3 2
5 4 3 2 1 -1
1 5
-1
0
```


### Salida de ejemplo

```text
1
2
5
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
