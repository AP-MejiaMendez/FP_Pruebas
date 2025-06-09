#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#endif

#define UNICODE
#define _UNICODE
#include <windows.h>

#include "GLOBAL.h"
#include <iostream>
#include <windows.h>

using namespace std;

void mainCalls()
{
    Console C(50, 25, 90, 25); // Moving hereda todo de Console, Maping, Player
    Moving M;
    C.configConsole();
    C.setTitle(L"LA TORRE DE LEUGIM");
    M.draw();

    while (true)
    {
        char tecla = _getch();
        if (tecla == 'q')
            break;

        M.mover(tecla);
        M.draw();
    }
}

// TODO_________________________________________ MAIN _______________________________________TODO

int main()
{
    mainCalls();
    return 0;
};