# [302] ¿El mediano, por favor?

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=302)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.296 segs.` |
| **Memoria consumida** | `3224 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1134001` |
| **Fecha de resolución** | `8/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 4,000 sMemoria máxima: 10240 KiB`

En la carnicería de mi pueblo tienen un sistema muy particular para decidir el orden
      en el que los clientes que están esperando son atendidos. Cuando un cliente llega
      a la tienda recoge un número que es distinto a todos los demás repartidos ese día
      (pero que aparte de eso no tienen ninguna correlación entre sí) y espera pacientemente
      a ser atendido.

Cuando el carnicero, que estudia matemáticas los fines de semana, puede atender a otro
      cliente, grita "¿El mediano, por favor?", esperando que aquel cliente cuyo número
      sea la mediana en ese momento dé un paso al frente y empiece a comprar.
      Más formalmente, la mediana de N elementos es el elemento que ocuparía la posición
      (N + 1) / 2 si estos se ordenaran crecientemente.

Como el proceso en ocasiones produce un gran alboroto entre la clientela,
          quiere un programa que le muestre cada vez el número del siguiente cliente que debe ser atendido.
          ¿Puedes ayudarle?


### Entrada

La entrada estará formada por diversos casos de prueba, cada uno correspondiente a un día distinto.

Cada caso ocupará dos líneas.
        La primera línea contendrá un entero N (entre 1 y 200.000) que
        representa el número de eventos que ocurrirán ese día. La segunda línea contiene
        un número por cada evento, entendidos de la siguiente manera: si el número está
        entre 1 y 1.000.000, representa el número entregado a un cliente que acaba de llegar;
        si el número es 0 representa que en ese momento el carnicero ha hecho su pregunta porque puede atender
        al siguiente cliente (de entre los que están esperando).


### Salida

Para cada caso de prueba se debe escribir una línea con los números de los clientes en el orden
        en que van siendo atendidos por el carnicero. Si en algún momento el carnicero pregunta pero
        la carnicería está vacía, en la salida aparecerá la cadena ECSA
        (El Carnicero Se Aburre). Observa que solamente se atienden
        tantos clientes como veces pregunta el carnicero (un 0 en la entrada), por lo que al finalizar
        la jornada pueden quedar clientes sin ser atendidos. Además, cuando no tiene clientes que atender,
        el carnicero se va un rato a la trastienda a descansar y cuando vuelve hay veces que tiene a varios
        esperándole.


### Entrada de ejemplo

```text
7
1 15 7 0 20 0 0
6
0 14 8 2 23 0
```


### Salida de ejemplo

```text
7 15 1
ECSA 8
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
