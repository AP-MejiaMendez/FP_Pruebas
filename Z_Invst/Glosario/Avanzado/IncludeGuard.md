[Volver al índice](../../../README.md)

##### **#ifndef / #define / #endif:**

Se llama include guard. Evita que el archivo se incluya más de una vez en el mismo archivo fuente, lo que puede causar errores de redefinición.

##### **#define**:

Define constantes o macros.

##### **Macros?**:

Instrucciones al preprocesador que te permiten crear atajos o símbolos que serán reemplazados antes de compilar el código.

- Ejemplo:
  #define PI 3.14159
  #define MAX(a,b) ((a) > (b) ? (a) : (b))
  Reemplazo textual antes de la compilación:
  Donde veas PI, el compilador pondrá 3.14159.
  Donde veas MAX(x, y), lo reemplazará con ((x) > (y) ? (x) : (y)).
  No ocupan memoria:
  Son solo texto que se sustituye automáticamente antes de compilar.
  No tienen tipo:
  A diferencia de constantes o funciones normales, las macros no tienen tipo ni validación estricta.
  Se llaman macros porque vienen del término "macroinstrucción", que significa: "Una instrucción que representa a muchas otras."

| Tipo        | Ejemplo                         | Descripción                               |
| ----------- | ------------------------------- | ----------------------------------------- |
| Constante   | `#define PI 3.14`               | Define un valor fijo.                     |
| Funcional   | `#define CUADRADO(x) ((x)*(x))` | Se comporta como una función.             |
| Condicional | `#ifdef`, `#ifndef`, etc.       | Para control del flujo del preprocesador. |
