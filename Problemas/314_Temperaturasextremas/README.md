# [314] Temperaturas extremas

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=314)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.06 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1137836` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-2,000 sMemoria máxima: 4096 KiB`

La Agencia Estatal de Meteorología (AEMET) actualiza diariamente el Banco Nacional de Datos Climatológicos, en el que se almacenan las  observaciones climatológicas (precipitación y temperatura) realizadas en España desde hace unos 150 años.

Nuria está estudiando la relación entre la variabilidad de la temperatura y el estado hídrico del suelo en una región de secano en España. Para ello, acude al Banco y solicita los registros de temperaturas en dicha zona año a año desde que existen registros.

En la primera fase de su estudio pretende determinar el número de picos y valles en las temperaturas en un determinado periodo de tiempo. 
	Una temperatura se considera pico (resp. valle) en una secuencia cuando la anterior y la siguiente en la secuencia son estrictamente menores (resp. mayores).


### Entrada

La primera línea contiene un número que indica el número de
    casos de prueba que aparecen a continuación.

Cada caso de prueba se compone de dos líneas. La primera de
    ellas tiene un único entero con el número de temperaturas registradas    (mayor que 0 y menor o igual que 10.000), mientras que la segunda
    línea contiene la secuencia de temperaturas (números enteros entre −50 y 60 grados centígrados).


### Salida

Para cada caso de prueba se escribirá el número de picos y de valles, separados por un espacio y seguidos de un salto de línea.


### Entrada de ejemplo

```text
4
5
7 5 3 8 9
8 
8 9 7 6 5 3 4 2
2 
3 -5
8 
4 -1 5 3 7 7 6 8
```


### Salida de ejemplo

```text
0 1
2 1
0 0
1 3
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
