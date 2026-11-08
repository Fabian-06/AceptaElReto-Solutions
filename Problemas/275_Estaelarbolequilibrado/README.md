# [275] ¿Está el árbol equilibrado?

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=275)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.068 segs.` |
| **Memoria consumida** | `1892 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1144063` |
| **Fecha de resolución** | `8/11/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-2,000 sMemoria máxima: 4096 KiB`

Un árbol binario está equilibrado si bien es vacío o bien cumple que la diferencia de alturas de sus dos hijos es como mucho 1 y además ambos están equilibrados.

De los siguientes árboles los dos primeros están equilibrados, pero el tercero no lo está.

Dado un árbol binario, queremos averiguar si está equilibrado o no.


### Entrada

La entrada comienza con el número de casos que vienen a continuación. Cada caso de prueba consiste en una línea de caracteres con la descripción de un árbol binario: el árbol vacío se representa con un punto (.); un árbol no vacío se representa con una R (que denota la raíz) seguida de la descripción del hijo izquierdo y del hijo derecho. Los árboles nunca contendrán más de 5.000 nodos.


### Salida

Para cada árbol, se escribirá en una línea SI si el árbol está equilibrado y NO si no lo está.


### Entrada de ejemplo

```text
3
RRR..R..R.R..
RR.R..RR..R.R..
RR..RR..R.R..
```


### Salida de ejemplo

```text
SI
SI
NO
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
