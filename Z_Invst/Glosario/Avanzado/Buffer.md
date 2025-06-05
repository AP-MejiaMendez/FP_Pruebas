[Volver al índice](../../../README.md)

Un buffer es un área de memoria temporal usada para almacenar datos mientras se transfieren de un lugar a otro.

### ¿Por qué se usa un buffer?

Para almacenar datos temporalmente mientras se procesan o se envían a otro dispositivo.

Para mejorar la eficiencia al evitar que la CPU tenga que esperar a que el dispositivo de entrada/salida (por ejemplo, pantalla, disco, red) procese cada dato uno por uno.

Para manejar diferencias de velocidad entre el productor y el consumidor de datos (por ejemplo, el programa genera datos más rápido que la pantalla puede mostrarlos).

### Buffer en el contexto de consola (pantalla):

En la consola, el buffer de pantalla es una memoria donde se almacenan los caracteres que se mostrarán.

El sistema dibuja (renderiza) lo que hay en ese buffer en la ventana visible de la consola.

Puedes tener un buffer más grande que la ventana visible, lo que permite "scroll" para ver más contenido.

También puedes crear buffers personalizados para manipular la salida de la consola sin afectar la pantalla visible inmediatamente.

#### Ejemplo sencillo:

Imagina que quieres escribir en la pantalla, pero en lugar de escribir carácter por carácter directamente en la ventana, primero escribes en un papel (buffer). Cuando terminas de escribir en el papel, muestras todo de golpe en la ventana, para evitar parpadeos o escritura lenta.

#### El término buffer viene del inglés y su significado original es "amortiguador" o "almohadilla".

En informática, se usa esa palabra porque:

Un buffer actúa como un “amortiguador” o espacio intermedio que suaviza la transferencia de datos entre dos partes que trabajan a diferentes velocidades o en momentos distintos.

Es como un colchón que recibe datos y los guarda temporalmente para que el receptor pueda procesarlos sin interrupciones ni pérdidas.

Entonces, se llama buffer porque su función principal es “amortiguar” o “absorber” las diferencias de velocidad y flujo entre el productor y consumidor de datos.