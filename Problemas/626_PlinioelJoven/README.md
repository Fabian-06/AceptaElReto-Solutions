# [626] Plinio el Joven

[![Juez](https://img.shields.io/badge/Juez-Acepta%20el%20Reto-blue?style=flat-square)](https://aceptaelreto.com/problem/statement.php?id=626)
[![Resultado](https://img.shields.io/badge/Resultado-Accepted%20(AC)-brightgreen?style=flat-square)](#)
[![Lenguaje](https://img.shields.io/badge/Lenguaje-C%2B%2B-00599C?style=flat-square)](#)

## 📊 Estadísticas de la solución

| Métrica | Valor |
| :--- | :--- |
| **Tiempo de CPU** | `0.036 segs.` |
| **Memoria consumida** | `1820 KiB` |
| **Lenguaje empleado** | `C++` |
| **ID de Envío** | `1132332` |
| **Fecha de resolución** | `2/10/2026` |

---

## 📝 Enunciado del Problema

> **Límites:** `Tiempo máximo: 2,000 sMemoria máxima: 4096 KiB`

Plinio el Joven fue un abogado, escritor y científico de la
      antigua Roma. Ilustre orador seguidor de Cicerón, su primera
      obra, una tragedia en griego, la escribió con solo 14
      años. Aunque la mayoría de sus escritos se han perdido, destacó en
      poesía y es considerado por algunos críticos el inventor del
      género literario de la carta escrita para ser publicada.

Una de sus cartas más famosas es la que dirigió a Tácito,
      historiador romano, describiendo la erupción del monte Vesubio
      en la que murió su tío, Plinio el Viejo. Debido a ella, las
      erupciones de ese tipo se conocen hoy como plinias.

Plinio el Joven fue joven toda su vida porque, según cuenta la
      leyenda, nació un 29 de febrero, por lo que
      solo cumplía años una vez de cada cuatro.

Dada una fecha, ¿podrías decirnos el siguiente cumpleaños de Plinio?


### Entrada

El programa deberá leer, de la entrada estándar, un primer
      número indicando cuántos casos de prueba deberán procesarse.

Cada caso de prueba está compuesto por una fecha en formato
      DD/MM/AAAA, indicando el día, mes y año de la fecha a
      consultar, que será siempre correcta. El año estará entre 60 y
      1581.


### Salida

Por cada caso de prueba el programa escribirá, en el mismo
      formato, la fecha del siguiente cumpleaños de Plinio el Joven,
      es decir el siguiente 29 de febrero. Los años consultados son
      anteriores a la reforma Gregoriana ideada por Clavius e
      impulsada por el papa Gregorio XIII, por lo que se
      consideran bisiestos todos los años divisibles
      por 4.

Si la fecha de entrada es el cumpleaños de Plinio, se indicará
      el siguiente.


### Entrada de ejemplo

```text
3
04/12/0061
29/02/1500
01/01/0444
```


### Salida de ejemplo

```text
29/02/0064
29/02/1504
29/02/0444
```

---
*Sincronizado automáticamente desde [Acepta el Reto](https://aceptaelreto.com/) con **AceptaElReto Sync**.*
