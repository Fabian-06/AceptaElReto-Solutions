# [112] Radares de tramo

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=112)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.032 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1131943` |
| **Fecha de resolución** | `1/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 4096 KiB`

La Dirección Particular de Tráfico (DPT) está empeñada en hacer que
los conductores respeten los límites de velocidad. Sin entrar en si es
por razones de seguridad, por ahorrar combustible, o con un mero afán recaudatorio, ahora
sabemos que además de los radares fijos tradicionales, están poniendo
en funcionamiento los radares de tramo.

Desde un punto de vista formal, estos radares se basan en el teorema
de Lagrange (también llamado de valor medio o de
Bonnet-Lagrange), que dice que si tienes una función continua en un
intervalo cerrado y derivable en el intervalo abierto, entonces algún
punto de ese intervalo abierto tendrá derivada instantánea igual a la
pendiente media de la curva en el intervalo cerrado.

Aunque asuste a primera vista, la repercusión es sencilla: si hacemos
un viaje desde Madrid a Zaragoza y nuestra velocidad media es de
111Km/h, forzosamente en algún punto del camino, nuestra
velocidad ha sido de 111Km/h.

Los radares de tramo consisten en colocar dos cámaras en dos puntos
alejados de una carretera para poder comprobar cuánto tiempo ha
tardado el coche en recorrer ese tramo. Si la velocidad media supera
la velocidad máxima permitida, gracias al teorema anterior podremos
saber (aunque no le hayamos visto) que en algún punto del trayecto ha
superado esa velocidad. Por ejemplo, si colocamos las cámaras
separadas 10Km en un tramo cuya velocidad está limitada a 110Km/h, y
un coche tarda 5 minutos en ser visto por la segunda cámara, sabremos
que su velocidad media ha sido de 120Km/h, y por tanto en algún sitio
ha superado el límite de velocidad aunque al pasar por debajo de las
dos cámaras el coche fuera a 80Km/h.


### Entrada

La entrada estará formada por un número indeterminado de casos de
prueba. Cada caso de prueba consistirá en tres números: el primero
será la distancia (en metros) que separan las dos cámaras, el segundo
indicará la velocidad máxima permitida en todo ese tramo (en Km/h) y
el tercer y último número indicará el número de segundos que ha
tardado un coche en recorrer el tramo. Todos esos números serán
enteros.

La entrada terminará cuando todos los números sean cero.


### Salida

Para cada caso de prueba, el programa generará una línea, indicando si el coche debe ser multado o no. En concreto,
indicará "OK" si el coche no superó la velocidad máxima,
indicará "MULTA" si se superó esa velocidad en menos de un
20% de la velocidad máxima permitida, y "PUNTOS" si la velocidad fue
superada en un 20% o más de esa velocidad; en ese
caso además de la multa se le quitarán puntos del carnet.

El sistema de radar puede fallar y registrar entradas incorrectas (por
ejemplo, indicando que el tiempo que ha tardado el coche es
negativo). En esos casos, el sistema mostrará la cadena "ERROR".


### Entrada de ejemplo

```text
9165 110 300
9165 110 299
12000 100 433
12000 100 431
12000 100 359
-1000 -50 -100
0 0 0
```


### Salida de ejemplo

```text
OK
MULTA
OK
MULTA
PUNTOS
ERROR
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
