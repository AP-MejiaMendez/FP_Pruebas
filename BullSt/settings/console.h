#pragma once
#include <windows.h>
#include <iostream>

class Console
{
public:
    Console(int w = 100, int h = 40, int fW = 12, int fH = 12) : consoleW(w), consoleH(h), consoleFW(fW), consoleFH(fH) {}

    void configConsole()
    {
        if (AllocConsole())
        {
            // Se obtiene el handle de la salida de la consola
            hConsoleOUT = GetStdHandle(STD_OUTPUT_HANDLE);

            // Se definen el tamaño de las columnas 80 ancho 25 alto
            windowSize = {0, 0, 79, 24};

            // Cambia el tamaño de la ventana de consola
            SetConsoleWindowInfo(hConsoleOUT, TRUE, &windowSize);

            // Cambia el tamaño del buffer de la consola
            COORD bufferSize = {80, 25};
            SetConsoleScreenBufferSize(hConsoleOUT, bufferSize);

            // Esperar a que el usuario presione una tecla para cerrar
            system("pause");
        }
        else
        {
            std::cerr << "No se pudo crear la consola." << std::endl;
        }
    }

protected:
    int consoleW;
    int consoleH;
    int consoleFW;
    int consoleFH;

    HANDLE hConsoleOUT;
    HANDLE hConsoleIN;

    SMALL_RECT windowSize;
};