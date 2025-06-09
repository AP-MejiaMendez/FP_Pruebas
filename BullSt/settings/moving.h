#pragma once

#include "print.h"
#include <windows.h>
#include <iostream>

class Moving : public Print
{
public:
    int identifier = 0;
    void mover(char tecla)
    {
        int nuevoX = playerX;
        int nuevoY = playerY;

        switch (tecla)
        {
        case 'w':
            nuevoY -= 1;
            break;
        case 's':
            nuevoY += 1;
            break;
        case 'a':
            nuevoX -= 1;
            break;
        case 'd':
            nuevoX += 1;
            break;
        }

        switch (identifier)
        {
        case 0:
            if (mainMapa[nuevoY][nuevoX] != '#' && mainMapa[nuevoY][nuevoX] != '_' && mainMapa[nuevoY][nuevoX] != '|')
            {
                playerX = nuevoX;
                playerY = nuevoY;
            }

            if (mainMapa[nuevoY][nuevoX] == '1')
            {
                playerX = 3;
                playerY = 3;
            }

            if (mainMapa[nuevoY][nuevoX] == '2')
            {
                identifier = 2;
            }
            break;
        case 2:
        {
            playerX = 3;
            playerY = 3;
            if (Mapa2[nuevoY][nuevoX] != '#' && Mapa2[nuevoY][nuevoX] != '_' && Mapa2[nuevoY][nuevoX] != '|')
            {
                playerX = nuevoX;
                playerY = nuevoY;
            }
        }
        break;

        default:
            break;
        }
    }
};
