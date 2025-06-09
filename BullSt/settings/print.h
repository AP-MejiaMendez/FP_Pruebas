#pragma once

#include "map.h"
#include <windows.h>
#include <iostream>
#include <cstdio> // Necesario para freopen
#include <conio.h>
#include <wchar.h>

class Print : public Map
{
public:
    Print(int x = 2, int y = 2) : playerX(x), playerY(y){}

    void draw()
    {
        system("cls");
        for (int y = 0; y < mapH; y++)
        {
            for (int x = 0; x < mapW; x++)
            {
                if (x == playerX && y == playerY)
                    std::cout << "(o)";
                else
                    std::cout << mapa[y][x];
            }
            std::cout << "\n";
        }
    }

public:
    int playerX;
    int playerY;
};
