[Volver al índice](../../README.md)

Un header (.h) solo contiene declaraciones: dice "esto existe", pero no tiene código ejecutable. Una librería sí contiene el código real, ya compilado o por compilar.

- **¿por qué decimos que los headers "forman parte" de una librería?** Porque los headers te permiten usar la librería. Sin ellos, el compilador no sabría qué funciones están disponibles ni cómo usarlas.
- - Ejemplo:
    windows.h declara funciones como MessageBox.
    Pero el código real está en una librería como User32.lib o User32.dll.
    Tú incluyes windows.h para que el compilador entienda qué es MessageBox, pero el vínculo final al código real lo hace el linker, usando la librería.

- **Hemos entendido todo mal?**:
  - Header = Declaraciones (no es una librería en sí).
  - Librería = Código que se ejecuta.
    Ambos trabajan juntos: el header te da acceso, la librería hace el trabajo.
