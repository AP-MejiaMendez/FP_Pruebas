#pragma once

#include "map.h"
#include <windows.h>
#include <iostream>
#include <algorithm>

class Print : public Map
{
public:
    Print(int x = 3, int y = 3) : playerX(x), playerY(y) {}

    const int viewW = 40;
    const int viewH = mapH;

    void drawMainMap()
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
                    std::cout << "/o";
                else
                    std::cout << mainMapa[y][mapX];
            }
            std::cout << "\n";
        }
    }

    void drawMap2()
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
                    std::cout << "/o";
                else
                    std::cout << Mapa2[y][mapX];
            }
            std::cout << "\n";
        }
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