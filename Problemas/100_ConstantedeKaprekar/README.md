# [100] Constante de Kaprekar

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=100)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.028 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1131674` |
| **Fecha de resolución** | `1/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 4096 KiB`

El matemático indio Dattaraya Ramchandra Kaprekar descubrió en
    1949 una curiosa característica del número 6174. Hoy, se conoce
    a dicho número como constante de Kaprekar en honor a
    él.

El número es notable por la siguiente propiedad:

A este proceso se le conoce como la rutina de Kaprekar, y
    siempre llegará al número 6174 en, como mucho, 7
    iteraciones. Una vez en él, el proceso no avanzará, dado que 7641 − 1467 = 6174.

Por ejemplo, el número 3524 alcanzará la constante de Kaprekar en 3 iteraciones:

5432 − 2345 = 3087
         
         8730 − 0378 = 8352
         
         8532 − 2358 = 6174

Los únicos dígitos de cuatro cifras para los que la rutina de
    Kaprekar no alcanza el número 6174 son los
    repdigits, es decir aquellos cuyas cuatro cifras son
    iguales (como 1111), pues en la primera iteración se alcanzará el
    valor 0 y no podrá salirse de él. Es por esto que en el paso 1 se
    pedía explícitamente que el número inicial tuviera al menos dos
    dígitos diferentes.

El resto de los números de cuatro cifras terminarán siempre en el
    número 6174.

A continuación se muestran dos ejemplos más:

2111 − 1112 = 0999
         
         9990 − 0999 = 8991
         
         9981 − 1899 = 8082
         
         8820 − 0288 = 8532
         
         8532 − 2358 = 6174

9831 − 1389 = 8442
         
         8442 − 2448 = 5994
         
         9954 − 4599 = 5355
         
         5553 − 3555 = 1998
         
         9981 − 1899 = 8082
         
         8820 − 0288 = 8532
         
         8532 − 2358 = 6174


### Entrada

La primera línea de la entrada contendrá el número de casos de
    prueba. Cada uno contendrá, en una única línea, un número a
    comprobar.


### Salida

Para cada caso de prueba, el programa indicará el número de
      vueltas que se debe dar a la rutina de Kaprekar para alcanzar el
      6174. Para los números repdigits deberá escribir
      8. Para la propia constante de Kaprekar deberá indicar
      0.


### Entrada de ejemplo

```text
5
3524
1111
1121
6174
1893
```


### Salida de ejemplo

```text
3
8
5
0
7
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
