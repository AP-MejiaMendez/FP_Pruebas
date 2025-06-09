#pragma once

#include "map.h"
#include <windows.h>
#include <iostream>

class Print : public Map
{
public:
    Print(int x = 2, int y = 2) : playerX(x), playerY(y) {}
    const int viewW = 40;   // Ancho de lo visible (ventana)
    const int viewH = mapH; // Igual al alto del mapa

    void draw()
    {
        system("cls");

        // Determina el inicio del viewport en X
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
                    std::cout << "(o)";
                else
                    std::cout << mapa[y][mapX];
            }
            std::cout << "\n";
        }
    }

public:
    int playerX;
    int playerY;
};
