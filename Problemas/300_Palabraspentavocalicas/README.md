# [300] Palabras pentavocálicas

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=300)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.028 segs.` |
| **Memoria consumida** | `1816 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1129975` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-3,000 sMemoria máxima: 4096 KiB`

Los estudiosos de la lengua no se ponen de acuerdo en cuáles son las palabras pentavocálicas,
      también conocidas como panvocálicas. Todos coinciden en que son palabras que contienen
      las cinco vocales (el prefijo penta-, de origen griego, significa cinco; y el prefijo pan-,
        también de origen griego, significa todos). Por ejemplo: "cuestionar", "secundario" o "hipotenusa".

Sin embargo, hay controversia en los detalles. Algunos
      añaden la condición de que las vocales no se pueden repetir, por lo que excluirían, por ejemplo,
      "aceitunero" por contener dos veces la vocal e. Otros añaden una condición fonética por la cual las cinco
      vocales deben sonar al pronunciar la palabra, por lo que excluirían, por ejemplo, "arquitecto", porque
      le falta el sonido de la vocal u. Nosotros somos más flexibles y admitimos como pentavocálicas todas aquellas
      palabras que simplemente contienen las cinco vocales.

Hay muchísimas palabras pentavocálicas en español; hay quien ha recopilado más de 42.000. Curiosamente,
      no existen palabras con las vocales en el orden aeiou, salvo que admitamos repeticiones, como
      en "cuadragesimoquinta". En orden inverso sí hay unas cuantas, como por ejemplo, "sudorienta" o "suponieran".


### Entrada

La entrada comienza con un número que indica la cantidad de casos
      de prueba que vienen a continuación. Cada caso consiste en una palabra de no más de 30 letras
      de la a a la z (todas minúsculas, sin tilde y excluída la letra ñ).


### Salida

Para cada caso de prueba, el programa escribirá SI si la palabra es pentavocálica y
      NO en caso contrario.


### Entrada de ejemplo

```text
4
albaricoque
seculariza
peliagudo
abracadabra
```


### Salida de ejemplo

```text
SI
NO
SI
NO
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
