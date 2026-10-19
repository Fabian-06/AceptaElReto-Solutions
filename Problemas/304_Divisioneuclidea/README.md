# [304] División euclídea

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=304)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.076 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1137852` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 4096 KiB`

Cuando en la escuela nos enseñan a dividir, nos explican qué son el
	 dividendo, el divisor, el cociente y el
	 resto. Intuitivamente aprendemos que la división sirve para
	 repartir un número determinado de cosas (dividendo) entre
	 una serie de personas (divisor). El resultado de la
	 operación nos indica a cuántas cosas tocan cada uno (cociente) y
	 cuántas sobran (resto).

Esa es la que se llama división euclídea (o entera) de
	 números naturales, es decir números no negativos. Enseguida
	 aprendemos, además, que no tiene sentido repartir algo entre cero
	 personas y por lo tanto el divisor no puede ser nulo.

Formalmente, la división euclídea entre dos números enteros
	 a y b (siendo b un número distinto de
	 cero) calcula un cociente q y un resto r
	 asociados a esos a y b, que cumplen que
	 a = b × q + r,
	 y donde el resto r es siempre un entero no
	 negativo,
	 0 ≤ r < |b|.

Aunque la definición es fácil de entender y aplicar cuando
	 trabajamos con números positivos, hay que pensarlo con un poco más
	 de cuidado antes de contestar cuál es el resultado de la división
	 cuando el dividendo o el divisor son negativos.


### Entrada

La entrada comienza con un número indicando la cantidad de casos
      de prueba que deberán procesarse. Cada caso de prueba aparece en una línea independiente y está
      compuesto por dos números enteros, primero el dividendo y luego el divisor. Ninguno será mayor que 10.000 en valor absoluto.


### Salida

Para cada caso de prueba, el programa escribirá en una línea el cociente y el resto de la división euclídea separados por un espacio. En el caso de que el divisor sea 0 se escribirá únicamente DIV0.


### Entrada de ejemplo

```text
5
7 3
7 -3
-7 3
-7 -3
7 0
```


### Salida de ejemplo

```text
2 1
-2 1
-3 2
3 2
DIV0
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
