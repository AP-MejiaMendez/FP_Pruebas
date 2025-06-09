#pragma once

#include "console.h"
#include <iostream>

class Map : public Console
{
public:
    static const int mapW = 100;
    static const int mapH = 10;

    char mapa[mapH][mapW + 1] = {
        "###########################################################",
        "#                                                         #",
        "#      #########                                          #",
        "#           #                                             #",
        "#     ####   #####                                        #",
        "#                                                         #",
        "#   #########                                             #",
        "#                                                         #",
        "#                                                         #",
        "###########################################################"};
};