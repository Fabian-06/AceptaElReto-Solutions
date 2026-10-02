# [186] Y el ganador es...

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=186)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.132 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1132192` |
| **Fecha de resolución** | `2/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-4,000 sMemoria máxima: 4096 KiB`

En muchos de los concursos de programación, como en el que hoy
      participas, cada vez que un equipo resuelve correctamente un
      problema recibe un globo del color asociado a ese problema. Al
      final, quien más globos consigue no sólo tiene su ordenador más
      colorido, sino que será el ganador del concurso.

Dada la lista de los globos colocados a cada equipo, ¿eres capaz
      de decir quién es el ganador?


### Entrada

La entrada estará compuesta de múltiples casos de prueba, cada
      uno de ellos simulando un concurso. Cada caso de prueba comienza
      con una línea con dos números, el primero de ellos indicando el
      número de equipos participantes (entre 1 y 20) y el segundo el
      número de globos entregados.

A continuación aparecerá una línea por cada globo entregado, con
      el número del equipo que lo ha recibido (entre 1 y el número de
      equipos) y el color (una palabra de un máximo de 20 letras). Un
      equipo nunca recibirá dos veces el mismo color de globo.

La entrada terminará cuando se llegue a un concurso sin equipos
      ni globos.


### Salida

Para cada caso de prueba se debe escribir el número del equipo
      ganador en una línea. En caso de empate, se escribirá
      EMPATE.


### Entrada de ejemplo

```text
4 3
2 Rojo
3 Amarillo
3 Azul
4 4
2 Rojo
3 Amarillo
3 Azul
2 Verde
0 0
```


### Salida de ejemplo

```text
3
EMPATE
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
