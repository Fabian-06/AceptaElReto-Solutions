# [357] La prueba de las cajas y las bolas

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=357)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.068 segs.` |
| **Memoria consumida** | `1680 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1136554` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000-2,000 sMemoria máxima: 4096 KiB`

En un concurso de televisión los concursantes deben superar una
	 prueba de rapidez. En un lado del estudio, N cajas. En el
	 otro lado un tanque lleno de bolas de plástico. Lo que tienen que
	 hacer es ir corriendo al depósito de bolas, recoger unas cuantas y
	 volver corriendo a las cajas para llenarlas.

Para hacerlo más emocionante, hay una serie de reglas:

Por ejemplo, si hay cuatro cajas, las capacidades iniciales son
	 1, 2, 3 y 4. El concursante podría poner 2 bolas en las tres
	 últimas cajas, por lo que éstas quedarían con 0, 2, 2 y 2
	 bolas. En el segundo viaje podría añadir una bola en la primera,
	 tercera y última caja, con lo que tendríamos 1, 2, 3 y 3 bolas. El
	 tercer y último viaje, con una única bola, terminaría de llenar la
	 caja que faltaba.

Dado un número N de cajas inicial, ¿cuántos paseos
	 como mínimo tendrá que hacer el concursante?


### Entrada

La entrada estará formada por distintos casos de prueba cada
    uno en una línea. En cada una habrá un único entero N
    (1 ≤ N ≤ 109).


### Salida

Por cada caso de prueba se escribirá, en una línea
    independiente, el número mínimo de paseos necesarios para llenar
    todas las cajas cumpliendo las normas del concurso.


### Entrada de ejemplo

```text
3
4
```


### Salida de ejemplo

```text
2
3
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
