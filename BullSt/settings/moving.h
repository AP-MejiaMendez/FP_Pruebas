#pragma once

#include "print.h"
#include <windows.h>
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <wchar.h>

class Moving : public Print
{
public:
    void mover(char tecla)
    {
        int nuevoX = playerX;
        int nuevoY = playerY;

        switch (tecla)
        {
        case 'w':
            nuevoY--;
            break;
        case 's':
            nuevoY++;
            break;
        case 'a':
            nuevoX--;
            break;
        case 'd':
            nuevoX++;
            break;
        }

        if (mapa[nuevoY][nuevoX] != '#')
        {
            playerX = nuevoX;
            playerY = nuevoY;
        }
    }
};
