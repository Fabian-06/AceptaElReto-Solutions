# [166] Zapping

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=166)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.016 segs.` |
| **Memoria consumida** | `1816 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1137824` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 4096 KiB`

Mi tele tiene 99 canales correlativos que van desde el canal número 1 al 99. Hace algún tiempo se me estropeó el mando a distancia, y no me funcionan los números, por lo que no  puedo acceder a mi canal favorito con ellos. Al menos, todavía funcionan los botones de pasar al siguiente canal y al anterior. No quiero que también estos botones se me rompan, de modo que siempre intento pulsarlos el menor número de veces.

Sabiendo que al pasar al siguiente canal desde el 99 la tele me salta al 1, y viceversa, ¿cuántas veces tengo que avanzar o retroceder de canal para pasar de un canal A a un canal B de forma óptima?


### Entrada

La entrada consta de una serie de casos de prueba consistentes en dos valores entre 1 y 99, el primero correspondiente al canal en el que me encuentro y el segundo al canal al que quiero llegar. La entrada termina cuando los dos números son 0.


### Salida

Para cada caso de prueba se escribirá una línea en la que aparecerá el número de veces que tengo que saltar de canal para conseguir mi objetivo de forma óptima.


### Entrada de ejemplo

```text
2 5
2 99
5 63
63 5
0 0
```


### Salida de ejemplo

```text
3
2
41
41
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
