#pragma once

#include <iostream>
#include <windows.h>

class Console
{
private:
    int width;
    int height;

public:
    //* Constructores
    Console(int w = 100, int h = 40) : width(w), height(h) {}

    void setConfigC()
    {
        // Crear una nueva consola
        AllocConsole();

        // Redirigir entrada y salida estándar
        freopen("CONOUT$", "w", stdout);
        freopen("CONIN$", "r", stdin);

        // Obtener handle
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        // Ajustar tamaño del búfer
        COORD bufferSize = {static_cast<SHORT>(width), static_cast<SHORT>(height)};
        SetConsoleScreenBufferSize(hConsole, bufferSize);

        // Ajustar ventana visible
        SMALL_RECT windowSize = {0, 0, static_cast<SHORT>(width - 1), static_cast<SHORT>(height - 1)};
        SetConsoleWindowInfo(hConsole, TRUE, &windowSize);

        // Mostrar mensaje
        std::cout << "Consola configurada: " << width << " x " << height << "\n";
        std::cin.get(); // Esperar entrada
    }
};
