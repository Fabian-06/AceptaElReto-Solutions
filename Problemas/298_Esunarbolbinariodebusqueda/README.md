# [298] ¿Es un árbol binario de búsqueda?

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=298)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.62 segs.` |
| **Memoria consumida** | `1868 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1144068` |
| **Fecha de resolución** | `9/11/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000-5,000 sMemoria máxima: 4096 KiB`

Un árbol binario de búsqueda es un árbol binario cuyos nodos almacenan
        claves (y valores asociados a esas claves) que se mantienen ordenadas de la siguiente
        manera: la raíz del árbol contiene una clave que es estrictamente mayor que todas las claves almacenadas
        en el hijo izquierdo y estrictamente menor que todas las claves almacenadas en el hijo derecho; además, ambos
    hijos son árboles binarios de búsqueda.

De los siguientes árboles (con números enteros como claves) solamente el de la derecha es
        un árbol binario de búsqueda.

Dado un árbol binario, el problema consiste en decidir si es o no un árbol binario de búsqueda.


### Entrada

La entrada comienza con el número de casos que vienen a continuación. Cada caso de prueba consiste en una línea con la descripción de un árbol binario: primero aparece su raíz (un entero no negativo), y a continuación la descripción del hijo izquierdo y después la del hijo derecho. El número −1 indica el árbol vacío. Los árboles nunca contendrán más de 4.000 nodos.


### Salida

Para cada árbol se escribirá SI si el árbol es un árbol binario de búsqueda y NO si no lo es.


### Entrada de ejemplo

```text
4
1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
5 4 1 -1 -1 -1 8 6 -1 -1 9 -1 -1
-1
2 2 -1 -1 -1
```


### Salida de ejemplo

```text
NO
SI
SI
NO
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
