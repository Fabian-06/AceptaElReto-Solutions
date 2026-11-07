# [212] Operación asfalto

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=212)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.388 segs.` |
| **Memoria consumida** | `1684 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1143925` |
| **Fecha de resolución** | `7/11/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-3,000 sMemoria máxima: 4096 KiB`

Las calles de Eulerandia están en un estado lamentable. El
    ayuntamiento ha decidido poner en marcha su famosa operación
    asfalto y arreglar todas las calles de una vez. Para eso ha
    alquilado una de esas grandes y pesadas máquinas asfaltadoras. En
    concreto, la que utilizarán es capaz de asfaltar ambas direcciones
    de la calle simultáneamente con solo recorrerla de principio a fin
    en un sentido cualquiera.

Se da la paradoja de que la máquina asfaltadora es tan grande y
	 pesada que, una vez asfaltada una calle, si la máquina volviera a
	 pasar por ella, destrozaría el asfalto que ella misma puso.

Esa circunstancia complica la planificación de la operación
	 asfalto, pues hay que ver si es posible diseñar una ruta de la
	 máquina que recorra toda la ciudad sin pasar dos veces por ninguna
	 calle.

En la figura 1 aparecen tres ejemplos de ciudades distintas. Si
	 Eulerandia tuviera la forma de la ciudad 1, se podría llevar la
	 asfaltadora desmontada hasta cualquiera de las cinco
	 intersecciones y, tras el montaje, ésta podría asfaltar toda la
	 ciudad volviendo al punto de partida. Con unas calles como las de
	 la ciudad 2, sin embargo, sólo se podría asfaltar toda la ciudad
	 si se empezara en la intersección 1 y se terminara en la 2 (o al
	 contrario). Por último, la ciudad 3 no podría asfaltarse por
	 completo sin hacer que la asfaltadora pase por alguna calle más de
	 una vez. La figura 2 muestra posibles recorridos sobre las
	 tres ciudades.

Se trata, pues, de analizar el plano de la ciudad y ver si se
	 podrán asfaltar todas sus calles con las condiciones anteriores o
	 no (teniendo en cuenta que la asfaltadora puede empezar en un
	 extremo de una calle y terminar su trabajo en otro de una calle
	 distinta).


### Entrada

La entrada está compuesta de varias descripciones de ciudades. Cada
ciudad comienza con dos líneas, la primera con el número de calles y
la segunda con el número I de intersecciones
(1 ≤I ≤50), que estarán numeradas de 1 a
I (entendemos por intersección a los puntos donde
comienzan o terminan calles; eso incluye también los extremos de
calles unidas con otras). A continuación aparece una línea por cada
calle indicando las intersecciones que une. Ten presente que algunas
calles pueden en realidad ser túneles o tener puentes y pasar unas por
encima de otras. El último caso de prueba es seguido de una línea con
un 0.

Se garantiza que desde cualquier calle se puede ir a cualquier
      otra.


### Salida

Se escribirá una línea por cada ciudad, con un SI si ésta
se puede asfaltar según las condiciones descritas y NO en
caso contrario.


### Entrada de ejemplo

```text
6
5
1 2
1 3
2 3
3 4
4 5
3 5
7
5
1 2
1 3
2 3
3 5
2 1
3 4
4 5
8
5
1 2
1 3
2 3
1 4
2 5
3 5
3 4
4 5
0
```


### Salida de ejemplo

```text
SI
SI
NO
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
