#pragma once

#include "console.h"
#include <windows.h>
#include <iostream>
#include <cstdio> // Necesario para freopen
#include <conio.h>
#include <wchar.h>

class Map : public Console
{
public:
    static const int mapW = 30;
    static const int mapH = 10;

    char mapa[mapH][mapW + 1] = {
        "##############################",
        "#                            #",
        "#      #########             #",
        "#           #                #",
        "#     ####   #####           #",
        "#                            #",
        "#   #########                #",
        "#                            #",
        "#                            #",
        "##############################"};
};