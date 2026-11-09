# [303] ¿Es un árbol AVL?

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=303)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.632 segs.` |
| **Memoria consumida** | `1868 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1144324` |
| **Fecha de resolución** | `9/11/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000-6,000 sMemoria máxima: 4096 KiB`

Un árbol AVL (denominado así por las iniciales de los apellidos de sus inventores, Georgii Adelson-Velskii y Yevgeniy Landis) es un árbol binario de búsqueda equilibrado en el sentido de que para todo subárbol se cumple que la diferencia entre las alturas de sus dos hijos es como mucho 1. Además, por ser de búsqueda, también se cumple que la clave almacenada en la raíz de cualquier subárbol es estrictamente mayor que todas las claves en su hijo izquierdo y estrictamente menor que todas las claves en su hijo derecho.

De los siguientes árboles (con números enteros como claves, y cuyo valor asociado a cada clave no es relevante para el problema) solamente el de la izquierda es AVL. El del medio no lo es porque no está equilibrado y el de la derecha no lo es porque no se cumple la propiedad del orden entre las claves.

Dado un árbol binario, el problema consiste en decidir si es o no un árbol AVL.


### Entrada

La entrada comienza con el número de casos que vienen a continuación. Cada caso de prueba consiste en una línea con la descripción de un árbol binario: primero aparece su raíz (un entero no negativo), y a continuación la descripción del hijo izquierdo y después la del hijo derecho. El número −1 indica el árbol vacío. Los árboles nunca contendrán más de 4.000 nodos.


### Salida

Para cada árbol se escribirá SI si el árbol es AVL y NO en caso contrario.


### Entrada de ejemplo

```text
3
2 1 -1 -1 3 -1 4 -1 -1
1 -1 3 2 -1 -1 4 -1 -1
4 1 -1 -1 3 -1 2 -1 -1
```


### Salida de ejemplo

```text
SI
NO
NO
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
