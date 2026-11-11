# [596] Codificación límite

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=596)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.04 segs.` |
| **Memoria consumida** | `1892 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1145092` |
| **Fecha de resolución** | `11/11/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 8192 KiB`

El envío de mensajes cifrados para evitar miradas indiscretas
    se lleva estudiando desde la antigüedad. El método más simple
    consiste en manejar tablas de traducción que contienen, para cada
	 letra, por qué otra letra se sustituirá en el mensaje cifrado.

Existe otro mecanismo simple que consiste en simplemente añadir
    caracteres aleatorios entre las letras del mensaje. El método que
    hoy proponemos utiliza este sistema. Además, requiere un pequeño
    esfuerzo adicional por parte del lector pues el mensaje
    recompuesto no contiene espacios separando las palabras,
    por lo que deberá ser él el que infiera, en el momento de leer,
    dónde empieza y termina cada una.

El procedimiento comienza con un mensaje cifrado como el
    siguiente: "xb..zu..t.u..".
    Ese mensaje lo interpretaremos como un árbol
    binario de caracteres donde el primer carácter simboliza la raíz y
    a continuación aparecen el hijo izquierdo y el hijo derecho,
    teniendo en cuenta que el árbol vacío está representado por un
    punto '.'. El mensaje del ejemplo
    representa el siguiente árbol (donde se han omitido los árboles vacíos):

El mecanismo de codificación límite lo que hace es quedarse con
    el límite o frontera del árbol (las hojas de izquierda a derecha),
    y escribirlas.


### Entrada

La entrada consiste en diversas líneas, cada una con un mensaje
codificado utilizando la codificación límite. Se garantiza que el
mensaje será un árbol binario válido, que no tendrá más de 5.000
caracteres y cuya altura no será mayor de 3.000. Los nodos del árbol
contienen caracteres de la 'a' a la 'z'.


### Salida

Para cada caso de prueba, escribir una línea con el mensaje descifrado.


### Entrada de ejemplo

```text
abh...ko..nl..a..
xb..zu..t.u..
```


### Salida de ejemplo

```text
hola
buu
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
