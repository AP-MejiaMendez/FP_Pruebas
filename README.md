<h1 align="center">FP - Pruebas</h1>
<br>

## Documentación

### Nomenclatura

- **Carpetas**: nombreejemplo (lowercase)
- **Archivo**: nombreEjemplo.cpp (camelCase)
- **Variables**: nombreVariable (camelCase)
- **Funciones**: NombreFuncion (PascalCase)

### Uso de librerias investigación profunda

#### iostream

#### windows.h

### Glosario

#### Básico

- **Libreria**: Conjunto de funciones y recursos reutilizables que puedes usar en tus programas sin tener que escribir todo desde cero. Se llama librería porque, igual que una biblioteca (library en inglés) guarda libros que puedes consultar, una librería de programación guarda código ya escrito que puedes usar cuando lo necesites. Es una colección organizada de funciones, clases o recursos, lista para "consultar" o reutilizar en tus programas.

- **headers**: Se llama header (que en inglés significa "encabezado") porque aparece al principio del código, antes de usar funciones o estructuras definidas en otros archivos. Es como un encabezado informativo que le dice al compilador: “Estas funciones, estructuras o variables existen, y puedes usarlas.” Históricamente, los headers se colocaban en la parte superior del código fuente, como un resumen de lo que está disponible para el programa. Por eso se llaman archivos de encabezado o header files.

- **#include**: Importa otros headers que se necesitan.

#### "Avanzado"

- **sing namespace std?**

- **SDK?**

- **STDL?**

##### **#ifndef / #define / #endif:**

Se llama include guard. Evita que el archivo se incluya más de una vez en el mismo archivo fuente, lo que puede causar errores de redefinición.

##### **#define**:

Define constantes o macros.

##### **Macros?**:

Instrucciones al preprocesador que te permiten crear atajos o símbolos que serán reemplazados antes de compilar el código.

- - Ejemplo:
    - - - #define PI 3.14159
    - - - #define MAX(a,b) ((a) > (b) ? (a) : (b))
    - - - - Reemplazo textual antes de la compilación:
    - - - - Donde veas PI, el compilador pondrá 3.14159.
    - - - - Donde veas MAX(x, y), lo reemplazará con ((x) > (y) ? (x) : (y)).
    - - - No ocupan memoria:
          Son solo texto que se sustituye automáticamente antes de compilar.
          - - - No tienen tipo:
                A diferencia de constantes o funciones normales, las macros no tienen tipo ni validación estricta.
                Se llaman macros porque vienen del término "macroinstrucción", que significa: "Una instrucción que representa a muchas otras."

---

| Tipo        | Ejemplo                         | Descripción                               |
| ----------- | ------------------------------- | ----------------------------------------- |
| Constante   | `#define PI 3.14`               | Define un valor fijo.                     |
| Funcional   | `#define CUADRADO(x) ((x)*(x))` | Se comporta como una función.             |
| Condicional | `#ifdef`, `#ifndef`, etc.       | Para control del flujo del preprocesador. |

##### **typedef struct:**

Define estructuras de datos.

Las estructuras se usan para agrupar varios datos relacionados en una sola unidad lógica, que puede contener diferentes tipos de datos, y así manejar esa información como un solo objeto.

##### **Declaraciones de funciones:**

Permiten que otros archivos .c puedan usarlas sin conocer su implementación.

##### **extern**:

Declara variables globales definidas en otros archivos fuente.

### Ezquisofrenia

- **¿Por qué C++ no usa .h en algunas librerías?**: C++ usa headers sin .h (como <iostream>, <vector>, <string>) para diferenciar los headers modernos de la STL de los headers heredados de C (como <stdio.h>, <stdlib.h>).

- **Headers no son librerías, aunque están relacionados.**: Un header (.h) solo contiene declaraciones: dice "esto existe", pero no tiene código ejecutable. Una librería sí contiene el código real, ya compilado o por compilar.

- **¿por qué decimos que los headers "forman parte" de una librería?** Porque los headers te permiten usar la librería. Sin ellos, el compilador no sabría qué funciones están disponibles ni cómo usarlas.
- - Ejemplo:
    windows.h declara funciones como MessageBox.
    Pero el código real está en una librería como User32.lib o User32.dll.
    Tú incluyes windows.h para que el compilador entienda qué es MessageBox, pero el vínculo final al código real lo hace el linker, usando la librería.

- **Hemos entendido todo mal?**:
- - Header = Declaraciones (no es una librería en sí).
- - Librería = Código que se ejecuta.
    Ambos trabajan juntos: el header te da acceso, la librería hace el trabajo.

## Recursos útiles

- [Documentación de winbase.h (Windows API)](https://learn.microsoft.com/en-us/windows/win32/api/winbase/) – Referencia oficial de Microsoft para funciones definidas en `winbase.h`, parte del SDK de Windows para desarrollo nativo.
