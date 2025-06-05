#pragma once

#include <iostream>
#include <windows.h>

// Nota: No usar 'using namespace std;' en headers

class Console
{
private:
    int fontW, fontH;

protected:
    int width;  // Ancho de consola
    int height; // Alto de consola

    HANDLE hConsoleOUT;      // Handle para las salidas
    HANDLE hConsoleIN;       // Handle para las entradas
    HANDLE hOriginalConsole; // Handle para estado original

    short entradaNueva[256] = {0};
    short entradaVieja[256] = {0};

    struct estadoEntradas // Acciones de las entradas
    {
        bool presionado;
        bool liberado;
        bool sostenido;
    } entradas[256], mouse[5];

    int mouseXPstn; // Posicion x del mouse
    int mouseYPstn; // Posicion Y del mouse

    std::string appName; // Nombre de la ventana?

public:
    // Constructor
    Console(int w = 100, int h = 40, int fW = 12, int fH = 12)
        : width(w), height(h), fontW(fW), fontH(fH),
        hConsoleOUT(nullptr), hConsoleIN(nullptr), hOriginalConsole(nullptr),
        mouseXPstn(0), mouseYPstn(0), appName("Default")
    {
        // Inicializar arrays estadoEntradas a false
        memset(entradas, 0, sizeof(entradas));
        memset(mouse, 0, sizeof(mouse));
    }

    //TODO invesitgar bien este pedazo
    int Error(const wchar_t *msg)
    {
        wchar_t buf[256];
        FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(),
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), buf, 256, NULL);
        if (hOriginalConsole)
            SetConsoleActiveScreenBuffer(hOriginalConsole);
        std::wcerr << L"ERROR: " << msg << L"\n\t" << buf << std::endl;
        return 0;
    }

    void declareConfig()
    {
        hConsoleOUT = GetStdHandle(STD_OUTPUT_HANDLE);
        hConsoleIN = GetStdHandle(STD_INPUT_HANDLE);
        hOriginalConsole = hConsoleOUT; // Handle original

        memset(entradaNueva, 0, sizeof(entradaNueva));
        memset(entradaVieja, 0, sizeof(entradaVieja));
        memset(entradas, 0, sizeof(entradas));
        memset(mouse, 0, sizeof(mouse));

        mouseXPstn = 0;
        mouseYPstn = 0;

        appName = "Default";
    }

    bool setConfigC()
    {
        declareConfig();
        if (hConsoleOUT == INVALID_HANDLE_VALUE)
        {
            Error(L"Bad Handle");
            return false;
        }

    
        return true;
    }
};
