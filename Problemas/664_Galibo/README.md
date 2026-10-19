# [664] Gálibo

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=664)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.04 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1137843` |
| **Fecha de resolución** | `19/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 1,000 sMemoria máxima: 4096 KiB`

Se conoce como el gálibo a la dimensión máxima que debe tener
    un vehículo para poder pasar por una zona de la vía de tamaño
    reducido como un túnel o un puente. Existen distintos tipos de gálibo
    y de formas de calcularlo que dependen del tipo de vehículo. Por
    ejemplo en los barcos el gálibo de un puente se mide teniendo en
    cuenta el nivel de la crecida más grande conocida. En trenes, el
    gálibo debe considerar no solo el alto sino también los anchos a
    distintas alturas.

En carretera el gálibo del que hay que preocuparse normalmente
    suele ser el vertical. En este caso la altura libre por debajo del
    puente debe tener en cuenta la altura máxima de los vehículos y un
    margen de seguridad relacionado con la amortiguación y cómo esta
    absorbe los movimientos verticales, así como cierta tolerancia por
    posibles imprecisiones a la hora de construir la estructura y por
    futuras operaciones de reasfaltado de la vía. Se puede incluso
    considerar, además, un margen de confort para que los conductores
    de los vehículos pesados se sientan cómodos (que dependerá de cómo
    se aproxime la vía al puente).

Para evitar problemas de gálibo para los vehículos más grandes,
    en algunas carreteras se colocan puentes de calibración que
    permiten a los conductores averiguar con tiempo suficiente
    si un puente próximo no tiene la altura mínima necesaria.

En ausencia de estos puentes de calibración, se puede confiar
	 en la información que aparece en el propio puente. En algunos
	 países hay pequeños carteles en el frontal del puente justo debajo
	 de cada uno de los carriles para que los conductores puedan
	 conocer su altura en cada uno de ellos. Gracias a estos carteles
	 si se quiere viajar seguro se puede hacer un primer trayecto en
	 un vehículo más pequeño registrando esas alturas para conocer si
	 el vehículo grande podrá pasar por debajo de todos ellos.


### Entrada

La entrada está compuesta de un número indeterminado de casos de prueba.

Cada caso de prueba comienza con una línea con un único número
    indicando el número de puentes (hasta 100) que hay en el trayecto
    que se desea hacer. Tras eso vendrá una línea por cada puente con
    su descripción. Esta comienza con el número de carriles que pasan
    por debajo del puente en el sentido de nuestro trayecto (como
    mucho 5) seguido de la altura del puente en cada uno de
    ellos en centímetros (un número entre 1 y 800).

Tras el último caso de prueba viene una línea con un 0
    que no debe procesarse.


### Salida

Por cada caso de prueba se escribirá la altura máxima que puede
    tener el camión para poder realizar el trayecto, teniendo en
    cuenta que este puede utilizar cualquiera de los carriles
    disponibles.


### Entrada de ejemplo

```text
2
3 300 300 250
2 325 300
2
1 450
1 400
0
```


### Salida de ejemplo

```text
300
400
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
