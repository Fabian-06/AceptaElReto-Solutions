# [691] Recaudación de la taquilla

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=691)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.24 segs.` |
| **Memoria consumida** | `1680 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1140316` |
| **Fecha de resolución** | `5/11/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 16384 KiB`

Esto del cine está fatal. Con tanta televisión por cable la gente
    cada vez viene menos, y la recaudación de la taquilla no llega ni para
    cubrir gastos. El gerente quiere que eso cambie
    y se le ha ocurrido la siguiente estrambótica idea: el coste de una entrada
    será igual al número de asientos libres en la fila seleccionada
    en el momento de la compra.
    Pretende embaucar a los clientes haciéndoles creer que así estarán más cómodos
    (a mí me da que no se lo van a creer…).

Lo que ocurre es que la gente que tiene abono anual tiene preferencia, entran
    antes al cine y se sientan como quieren, por lo que la ocupación de las filas
    cuando se empieza a vender entradas en taquilla no es uniforme.

Conociendo esta distribución inicial por filas, ¿nos ayudas a calcular
    cuánto es lo máximo que podemos recaudar hoy vendiendo entradas a la gente
    que está esperando para comprarlas? El taquillero es quien tiene la potestad
    de elegir dónde sienta a cada nuevo cliente y las entradas se venden siempre de una en una.


### Entrada

En la entrada aparecen una serie de casos de prueba. Cada caso consta de dos
       líneas. En la primera aparecen tres números: el número F de filas
       que tiene el cine (1 ≤ F ≤ 100.000), el número A de asientos en cada fila (todas las
       filas son iguales, y 1 ≤ A ≤ 100.000)
       y el número C de clientes en la cola esperando
       a comprar una entrada (0 ≤ C ≤ 1.000.000).
       En la siguiente línea aparecen F números (entre 0 y A), separados por espacios,
       indicando el número de
       asientos ocupados de cada fila, desde la más cercana a la pantalla a la más
       lejana, cuando comienza la venta de entradas.


### Salida

Por cada caso de prueba se escribirá una línea que contenga la máxima
       recaudación que podemos obtener si seguimos la ocurrente estrategia
       propuesta por el gerente. Obviamente, si el cine se llena antes de
       que la cola de clientes se termine, la taquilla cerrará y esos clientes
       lamentablemente se quedarán sin entrada.


### Entrada de ejemplo

```text
4 4 2
4 2 1 3
1 5 6
0
```


### Salida de ejemplo

```text
5
15
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
