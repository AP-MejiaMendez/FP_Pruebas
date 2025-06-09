#pragma once

#include "map.h"
#include <windows.h>
#include <iostream>
#include <algorithm>

class Print : public Map
{
public:
    Print(int x = 2, int y = 2) : playerX(x), playerY(y) {}

    const int viewW = 40;
    const int viewH = mapH;

    void clearScreen()
    {
        COORD coord = {0, 0};
        SetConsoleCursorPosition(hConsoleOUT, coord);
    }
    void ajustarVentana()
    {
        SHORT left = std::max(0, playerX - consoleW / 2);
        if (left + consoleW > bufferW)
            left = bufferW - consoleW;

        SHORT top = 0; // Si solo quieres scroll horizontal, esto se mantiene en 0

        SMALL_RECT newWindow = {
            left,
            top,
            (SHORT)(left + consoleW - 1),
            (SHORT)(top + consoleH - 1)};

        SetConsoleWindowInfo(hConsoleOUT, TRUE, &newWindow);
    }

    void draw()
    {
        system("cls");

        int startX = playerX - viewW / 2;

        if (startX < 0)
            startX = 0;
        if (startX + viewW > mapW)
            startX = mapW - viewW;

        for (int y = 0; y < mapH; y++)
        {
            for (int x = 0; x < viewW; x++)
            {
                int mapX = startX + x;
                if (mapX == playerX && y == playerY)
                    std::cout << "o";
                else
                    std::cout << mapa[y][mapX];
            }
            std::cout << "\n";
        }

        ajustarVentana();
    }

public:
    int playerX;
    int playerY;
};

/*
Explicación:
startX es el punto desde donde la "cámara" empieza a mostrar.
El personaje siempre estará más o menos centrado (a la mitad del viewport).
El código limita startX para que no se salga del mapa.
Solo se imprime de startX a startX + viewW.
*/