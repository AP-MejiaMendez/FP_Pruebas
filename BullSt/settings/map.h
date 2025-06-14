#pragma once

#include "console.h"
#include <iostream>

class Map : public Console
{
public:
    static const int mapW = 81;
    static const int mapH = 21;
    char mainMapa[mapH][mapW + 1] = {
        "################################################################################",
        "#                                                                              #",
        "# _____________________________________________________________________________#",
        "#                                                                               #",
        "#                                                                           ____#",
        "# _______________________________                                               ",
        "#                                |                                --->       1  ",
        "#                                |                                          _____",
        "#                                |                                              #",
        "#                                |                                              #",
        "#                                |                                          ____#",
        "#                                |                                              ",
        "#                                |                                ---->      2  ",
        "#                                |                                          _____",
        "#                                |                                              #",
        "#                                |                                              #",
        "#                                |                                          ____#",
        "#                                |                                              ",
        "#                                |                                ---->      3  ",
        "#                                |______________________________________________",
        "################################################################################"};

    char Mapa2[mapH][mapW + 1] = {
        "################################################################################",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "#                                                                              #",
        "################################################################################"};
};
