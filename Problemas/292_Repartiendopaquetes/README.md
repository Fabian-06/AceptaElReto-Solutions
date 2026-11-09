# [292] Repartiendo paquetes

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=292)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.308 segs.` |
| **Memoria consumida** | `4984 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1144316` |
| **Fecha de resolución** | `9/11/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000-4,000 sMemoria máxima: 16384 KiB`

La comarca de Dispersión de Arriba está formada por multitud de bonitas casas repartidas
        por laderas y colinas. Las casas están conectadas por carreteras, carreterillas, caminos o senderos,
        dependiendo de las zonas y de la importancia de sus dueños. Las características de estas conexiones
        son muy variadas, desde anchas carreteras prácticamente planas a empinados senderos en ocasiones
        embarrados y muy poco transitables, sobre todo cuesta arriba.

La oficina de la empresa de transportes que atiende a la comarca está situada en una de estas casas.
    Cada día, un único repartidor debe entregar los paquetes recibidos, y para ello cuenta con una moto
    cuyo compartimento de carga es tan pequeño que solamente puede llevar un paquete cada vez. Con
    estas restricciones, la rutina del sufrido repartidor consiste en tomar uno de los paquetes, llevarlo
    hasta la casa del destinatario, y volver a la oficina a por el siguiente paquete. Debido a las condiciones
    de las vías, hay ocasiones en las que interesa, o es incluso inevitable, que el camino de vuelta siga una ruta distinta
    al de ida.

Conociendo el esfuerzo que supone para el repartidor viajar por las distintas vías en cada sentido
    transitable, y las casas donde debe entregar paquetes un día concreto, ¿puedes ayudarle a decidir
    la mejor forma (la de menor esfuerzo total) de repartir los paquetes? El repartidor tiene total libertad
    para elegir en qué orden reparte los paquetes y qué rutas sigue, tanto para ir como
    para volver.


### Entrada

La entrada está compuesta por diversos casos de prueba, ocupando cada uno de ellos varias líneas.

La primera línea contiene el número N 
        de casas en la comarca (entre 1 y 10.000) y la segunda el número C
        de conexiones directas entre casas (entre 1 y 100.000).
        A continuación, aparecen C líneas cada una con tres enteros,
        origen destino esfuerzo, que indican que se puede ir
        directamente desde la casa origen hasta la casa destino
        (las casas están numeradas desde 1 hasta N) con el consiguiente esfuerzo
        (un valor entre 1 y 10.000). Ten en cuenta que si una conexión
    es transitable en ambos sentidos aparecerá dos veces, con el origen y el destino intercambiados
    y con un esfuerzo posiblemente distinto para cada sentido (al fin y al cabo, no es lo mismo subir que bajar).

Tras la descripción de la comarca, aparece una línea con dos enteros: O es el número de
        la casa donde se encuentra la
        oficina (el repartidor debe comenzar y terminar su jornada laboral en esta casa) y
        P (entre 1 y N) es el número de paquetes a repartir. A continuacion, aparece otra línea con
        los P números de las casas donde viven los destinatarios.


### Salida

Para cada caso de prueba el programa debe escribir una línea con el esfuerzo mínimo
        necesario para repartir todos los paquetes de ese día.
        Se garantiza que este valor nunca será mayor que 109.
        Si para un día el reparto es imposible porque no
        existen suficientes conexiones para construir las rutas necesarias, el programa escribirá Imposible.


### Entrada de ejemplo

```text
4
5
1 2 5
2 3 2
3 1 8
1 4 2
4 1 3
1 3
2 3 4
4
3
1 3 2
3 1 3
3 4 5
1 2
2 3
```


### Salida de ejemplo

```text
35
Imposible
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
