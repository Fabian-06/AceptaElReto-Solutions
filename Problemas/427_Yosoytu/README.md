# [427] Yo soy tu...

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=427)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `1.872 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1143082` |
| **Fecha de resolución** | `7/11/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 4096 KiB`

El estreno de las películas de la saga La Guerra de las
      Galaxias ha generado siempre mucha expectación. Cuando se
      supo que en El Imperio Contraataca se desvelaría un
      importante parentesco, se dispararon los rumores y las noticias
      falsas.

Para confundir a los especuladores (y crear más interés), la
      productora decidió filtrar infinidad de frases del estilo
      "A, yo soy tu B", donde "A" era un nombre,
      y "B" un parentesco.

Para conseguir crear a tiempo una magnitud considerable de
      noticias falsas, se recurrió a programadores para automatizar la
      tarea. Éstos recibían listas de los nombres y parentescos, y
      tenían que generar la frase correspondiente de acuerdo a la
      plantilla.

Por miedo a que en aquellas listas se filtrara la pareja real de
      la película, "Luke" y "padre", los programas escribían
      TOP SECRET si se la encontraban. Pero en 1980 no había
      tanta preocupación por la seguridad como hay hoy, y solo hacían
      el cambio si ambas palabras coincidían exactamente, incluídas
      las mayúsculas y minúsculas.


### Entrada

El programa deberá leer, de la entrada estándar, un primer
      número indicando cuántos casos de prueba vendrán a continuación.

Cada caso de prueba constará de dos líneas, ambas de no más de
      100 caracteres sin espacios. La primera contendrá el nombre del
      personaje y la segunda el parentesco.


### Salida

Para cada caso de prueba, el programa generará la frase que se
      debía filtrar a la prensa siguiendo el esquema descrito, salvo
      que el personaje y el parentesco sean, exactamente,
      "Luke" y "padre" respectivamente. En
      ese caso se escribirá "TOP SECRET". Esta
      comparación será sensible a mayúsculas.


### Entrada de ejemplo

```text
4
C-3PO
creador
Luke
padre
Princesa
Principe
Luke
Padre
```


### Salida de ejemplo

```text
C-3PO, yo soy tu creador
TOP SECRET
Princesa, yo soy tu Principe
Luke, yo soy tu Padre
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
