# [151] ¿Es matriz identidad?

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=151)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.148 segs.` |
| **Memoria consumida** | `1684 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1136420` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-2,000 sMemoria máxima: 4096 KiB`

Se dice que una matriz es identidad cuando todos sus elementos son cero a excepción de la diagonal principal, que se encuentra rellena de unos:

Para que una matriz sea identidad debe de ser cuadrada, es decir, tener el mismo número de filas que de columnas.


### Entrada

La entrada consta de una serie de casos de prueba. Cada uno comienza con un número que representa el número de filas, como máximo 50, de una matriz cuadrada. Tras él, aparecen los elementos que forman la matriz, que serán valores entre -1.000 y 1.000 (incluídos).

La entrada terminará con una matriz de 0 filas.


### Salida

Para cada caso de prueba se indicará SI si la matriz es identidad y NO en caso contrario.


### Entrada de ejemplo

```text
3
1 0 0
0 1 0
0 0 1
2
0 1
1 0
5
1 0 0 0 0
0 5 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
0
```


### Salida de ejemplo

```text
SI
NO
NO
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
