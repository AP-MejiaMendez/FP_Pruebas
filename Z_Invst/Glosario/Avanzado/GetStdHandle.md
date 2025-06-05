[Volver al índice](../../../README.md)

- GetStdHandle es una función de la API de Windows que devuelve un handle (un identificador o "puntero" especial) a un dispositivo estándar.
- Un handle es una referencia que Windows usa para identificar recursos como archivos, consola, etc.
- La función recibe un parámetro que indica qué tipo de handle quieres obtener.

**Parámetros usados:**
STD_OUTPUT_HANDLE: pide el handle para la salida estándar, normalmente la consola donde se imprime el texto (por ejemplo, std::cout en C++).
STD_INPUT_HANDLE: pide el handle para la entrada estándar, normalmente la consola donde se leen las entradas del teclado (por ejemplo, std::cin en C++).

Con estos handles puedes usar funciones específicas de la API Windows para controlar la consola de manera más directa y avanzada, como cambiar colores, leer entradas, mover el cursor, etc.