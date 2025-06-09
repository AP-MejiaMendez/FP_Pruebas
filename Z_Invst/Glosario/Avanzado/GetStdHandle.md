[Volver al índice](../../../README.md)

- GetStdHandle es una función de la API de Windows que devuelve un handle (un identificador o "puntero" especial) a un dispositivo estándar.
- Un handle es una referencia que Windows usa para identificar recursos como archivos, consola, etc.
- La función recibe un parámetro que indica qué tipo de handle quieres obtener.

**Más explicado**

Un handle (o "manejador") es un valor (generalmente un número entero) que representa una referencia a un objeto del sistema operativo. No puedes acceder directamente a los objetos del sistema (como archivos, ventanas, consolas, procesos, etc.), así que Windows te da un handle para interactuar con ellos de forma segura.

Piensa en el handle como un "ticket" o "identificador" que el sistema te da para manipular un recurso que solo él entiende internamente.

La palabra "handle" viene del inglés y significa literalmente "asa" o "mango" (como el de una taza o una herramienta). Se usa en computación porque describe metafóricamente una forma de "agarrar" o "manipular" algo complejo sin tocar directamente su interior.

No accedes directamente al objeto (por razones de seguridad, abstracción y portabilidad), sino a través de este "mango".

**Beneficios**
- Abstracción: No necesitas saber cómo está implementado el objeto.
- Seguridad: No puedes modificar directamente la memoria del sistema.
- Portabilidad y mantenimiento: Windows puede cambiar la implementación interna sin afectar a los programas que usan handles.

**Parámetros usados:**
STD_OUTPUT_HANDLE: pide el handle para la salida estándar, normalmente la consola donde se imprime el texto (por ejemplo, std::cout en C++).
STD_INPUT_HANDLE: pide el handle para la entrada estándar, normalmente la consola donde se leen las entradas del teclado (por ejemplo, std::cin en C++).

Con estos handles puedes usar funciones específicas de la API Windows para controlar la consola de manera más directa y avanzada, como cambiar colores, leer entradas, mover el cursor, etc.