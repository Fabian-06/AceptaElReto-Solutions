# [237] Números polidivisibles

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=237)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.052 segs.` |
| **Memoria consumida** | `1832 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1137829` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-3,000 sMemoria máxima: 4096 KiB`

El número 381.654.729 tiene una propiedad muy curiosa
	 que no cumple ningún otro número. Si lo miras con cuidado es
	 probable que te des cuenta de que tiene los nueve dígitos entre
	 el 1 y el 9 y que no repite ninguno de ellos. Sin
	 embargo, eso no es lo único especial que tiene (hay muchos otros
	 números así).

Lo que realmente lo hace singular es que, además de lo
	 anterior, es divisible por 9; si se le quita el último dígito, queda
	 un número divisible por 8; si se le vuelve a quitar el último
	 dígito, queda un número divisible por 7; y así continuamente hasta
	 llegar a un número de un único dígito que, naturalmente, es
	 divisible por 1:

Esta última peculiaridad es lo que en matemáticas se conoce
	 como un número polidivisible, que puede definirse de la
	 siguiente forma: un número es polidivisible si es
	 divisible por su longitud y, además, si se le quita el
	 último dígito queda un número que es a su vez polidivisible.

Existen otros números polidivisibles como el 102 o el
    9.876. Pero su cantidad es limitada: hay un total de 20.456 números
    polidivisibles distintos, el mayor de los cuales tiene 25 dígitos.


### Entrada

La entrada estará compuesta por distintos números positivos,
    cada uno de ellos en una línea. Los números serán siempre mayores
    que cero y nunca mayores que 1018.


### Salida

Por cada número, se escribirá una línea en donde aparecerá
    "POLIDIVISIBLE" si el número es polidivisible según
    la definición anterior o "NO POLIDIVISIBLE" si no lo
    es.


### Entrada de ejemplo

```text
381654729
102
9876
67
```


### Salida de ejemplo

```text
POLIDIVISIBLE
POLIDIVISIBLE
POLIDIVISIBLE
NO POLIDIVISIBLE
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
