# [105] Ventas

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=105)
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

> **Límites:** `Tiempo máximo: 1,000 sMemoria máxima: 4096 KiB`

Debido a la crisis, el bar de Javier ha notado un descenso de
	 las consumiciones. Además, según dicen en los telediarios, la ley
	 antitabaco le está perjudicando aún más. Como no termina de
	 creerse todo lo que dicen en la televisión, ha decidido hacer un
	 estudio de mercado semanal de su establecimiento. Para ello, ha
	 estado apuntando la caja diaria que se ha realizado en las últimas
	 semanas. Le gustaría saber qué día de la semana se producen el
	 mayor y el menor número de ventas, y si las ventas del domingo
	 superan a la media semanal. De esta manera podrá establecer
	 estrategias de marketing que le permitan recuperar algo de las
	 ganancias perdidas.

Javier abre su bar todos los días menos los Lunes, que utiliza
	 para descansar.

Realiza un programa que ayude a Javier en su cometido. Dada una
	 lista de valores correspondiente a una semana, nuestro programa
	 deberá decirle a Javier el día de la semana que más y menos ha
	 vendido, y si las ventas del domingo superan la media.


### Entrada

El programa recibirá una lista de semanas a evaluar. Cada
    semana constará de un valor para cada día. El número de semanas es
    indeterminado. El programa terminará de ejecutarse cuando para el
    primer día de la semana se indique una venta de -1.


### Salida

Para cada caso de prueba, el programa escribirá una línea
    conteniendo dos días de la semana (MARTES,
    MIERCOLES, JUEVES, VIERNES,
    SABADO o DOMINGO). El primero indicará el día de
    más ventas y el segundo el de menos. Después se indicará un
    SI si el domingo se realizaron más ventas que la media
    semanal, y NO en caso contrario. Las tres palabras se
    separarán entre ellas por un espacio.

Si hay empate en alguno de los valores de ventas mínimo y
	 máximo, se especificará EMPATE.


### Entrada de ejemplo

```text
185.50
250.36
163.45
535.20
950.22
450.38
-1
```


### Salida de ejemplo

```text
SABADO JUEVES SI
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
