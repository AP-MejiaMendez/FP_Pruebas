#ifndef CSETTINGS_H // TODO Inicio del If
// 🔍 Revisa si NO está definida la bandera CWidth.
// Es como decir: “¿Ya incluimos este archivo? Si no, entonces sigamos…”
#define CSETTINGS_H
// ✅ Ahora marcamos que CWidth ya fue definido.
// Así, si se vuelve a incluir este archivo, sabremos que ya pasó por aquí y lo ignoraremos.

// TODO-------------------------TODO
// TODO____DEFAULT libraries____TODO
// TODO-------------------------TODO
#include <iostream>
#include <windows.h>

// TODO--------------TODO
// TODO____MACROS____TODO
// TODO--------------TODO
#define CWhidth

// TODO-----------------TODO
// TODO____STRUCTURS____TODO
// TODO-----------------TODO
typedef struct
{
    int x;
    int y;
} Punto;

// TODO-----------------TODO
// TODO____FUNCIONES____TODO
// TODO-----------------TODO
inline void setConfigC()
{
    // 1. Crear una nueva consola
    AllocConsole();

    // 2. Redirigir la salida estándar a la nueva consola
    freopen("CONOUT$", "w", stdout);
    freopen("CONIN$", "r", stdin);

    // 3. Obtener el handle de la nueva consola
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // 4. Ajustar el buffer
    COORD bufferSize;
    bufferSize.X = 100;
    bufferSize.Y = 40;
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    // 5. Ajustar la ventana visible
    SMALL_RECT windowSize;
    windowSize.Left = 0;
    windowSize.Top = 0;
    windowSize.Right = 100 - 1;
    windowSize.Bottom = 40 - 1;
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);

    // 6. Imprimir algo
    std::cout << "Nueva consola abierta con tmano " << 100 << "x" << 40 << ".\n";
    system("pause");
}

// TODO-----------------------TODO
// TODO____VARIABLES GLOBAL___TODO
// TODO-----------------------TODO
// extern int contador_global; //? Falta investigar aca

#endif // TODO Final del if

/* 🧠 ¿Qué hace cada línea?
- `#ifndef CWidth`: pregunta “¿CWidth NO está definido?” → si es cierto, ejecuta lo siguiente.
- `#define CWidth`: crea la bandera simbólica `CWidth` como referencia para futuras inclusiones.
- Así, si este archivo `.h` vuelve a ser incluido, el `#ifndef` fallará y el código será ignorado correctamente.

🎯 Conclusión:
- No estás definiendo el archivo como tal.
- Solo estás marcando que ya fue leído por el compilador para evitar repetirlo.
- Esto se llama un “include guard” o “protección contra múltiples inclusiones”.
- Es una práctica estándar y muy importante en C/C++.
*/
