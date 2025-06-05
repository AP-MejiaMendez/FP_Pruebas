// TODO____PERSONAL libraries_____TODO

#include "GLOBAL.h" //* Configuraciones básicas importantes

// TODO____DEFAULT libraries____TODO

#include <iostream>
#include <windows.h>          //?Invesitgar mas PARA QUE ST (header clásico de C, parte del API de Windows.)
#include <chrono>             //? Invesitgar mas PARA QUE ST
#include <vector>             //? Invesitgar mas PARA QUE ST
#include <list>               //? Invesitgar mas PARA QUE ST
#include <thread>             //? Invesitgar mas PARA QUE ST
#include <atomic>             //? Invesitgar mas PARA QUE ST
#include <condition_variable> //? Invesitgar mas PARA QUE ST

// TODO____Calls_______TODO

using namespace std;

// TODO____Main Funcions_______TODO

void mainCalls()
{
    //Ancho, Alto
    Console consola(100, 100);
    consola.setConfigC();
}

// TODO_________________________________________ MAIN _______________________________________TODO

int main()
{
    mainCalls();
    return 0;
}