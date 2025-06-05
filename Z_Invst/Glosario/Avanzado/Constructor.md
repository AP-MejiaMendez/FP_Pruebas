[Volver al índice](../../../README.md)

Es una función especial que se llama automáticamente cuando creas un objeto de esa clase. Sirve para inicializar las variables (atributos) del objeto.

**Opción 1 (lista de inicialización):**
Console(int w = 100, int h = 40) : width(w), height(h) {}

**Opción 2 (asignación dentro del cuerpo):**
Console(int w = 100, int h = 40)
{
width = w;
height = h;
}

- La lista de inicialización inicializa los atributos directamente al crear el objeto.
- La asignación dentro del cuerpo crea el objeto con valores predeterminados y luego los cambia.
- La lista es más eficiente, necesaria para algunos casos y es la práctica recomendada.
