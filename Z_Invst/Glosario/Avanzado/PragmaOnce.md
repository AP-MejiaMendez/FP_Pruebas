[Volver al índice](../../../README.md)

sirve para evitar que un archivo de encabezado (.h o .hpp) se incluya más de una vez en la misma compilación.

**Por qué es importante:**
Cuando un archivo de encabezado se incluye varias veces en diferentes archivos de código fuente, puede generar errores de redefinición o duplicación, porque el compilador verá el mismo contenido repetido varias veces.

**Cómo funciona:**
Cuando el compilador encuentra #pragma once al inicio de un archivo, marca ese archivo para que no sea incluido nuevamente durante la misma compilación, aunque haya otros #include que lo referencien.

| Método                     | Ventajas                                                                             | Desventajas / Consideraciones                                                                   |
| -------------------------- | ------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------- |
| Include guards (`#ifndef`) | Compatible con todos los compiladores; estándar para proteger inclusiones múltiples. | Más código, posibilidad de errores si no se usan correctamente (nombre duplicado, mal escrito). |
| `#pragma once`             | Código más limpio, menos errores, compilación a veces más rápida.                    | No es estándar ISO C++, es una extensión, aunque muy bien soportada por compiladores modernos.  |

### #pragma once se llama así porque:

#pragma → instrucción especial del compilador.

once → indica que el archivo debe procesarse una sola vez.

Juntos:

Una instrucción especial para que el compilador incluya ese archivo una única vez durante la compilación.
