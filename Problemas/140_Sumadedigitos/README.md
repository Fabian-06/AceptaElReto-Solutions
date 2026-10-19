# [140] Suma de dígitos

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=140)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.056 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1128861` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-4,000 sMemoria máxima: 4096 KiB`

Se trata de implementar un programa que sume los dígitos de un
    número entero no negativo. Por ejemplo, la suma de los dígitos del
    3433 es 13.

Para darle un poco más de emoción, el programa no se limitará a
    escribir el resultado de la suma, sino que también escribirá todos
    los sumandos utilizados: 3 + 4 + 3 + 3 = 13.


### Entrada

La entrada consta de una serie de casos de prueba terminados con un
número negativo. Cada caso de prueba es una simple línea con un número
no negativo no mayor que 109 del que habrá
que sumar todos sus dígitos.


### Salida

Para cada caso de prueba se mostrará una línea en la que aparecerán
cada uno de los dígitos separados por el signo +, tras lo
cual aparecerá el símbolo = y la suma de todos los
dígitos.

Ten en cuenta que antes y después de cada símbolo (+ y
=) hay un espacio.


### Entrada de ejemplo

```text
3433
64323
8
-1
```


### Salida de ejemplo

```text
3 + 4 + 3 + 3 = 13
6 + 4 + 3 + 2 + 3 = 18
8 = 8
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
