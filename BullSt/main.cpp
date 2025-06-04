// TODO-------------------------TODO
// TODO____DEFAULT libraries____TODO
// TODO-------------------------TODO

#include <iostream>
#include <windows.h>          //?Invesitgar mas PARA QUE ST (header clásico de C, parte del API de Windows.)
#include <chrono>             //? Invesitgar mas PARA QUE ST
#include <vector>             //? Invesitgar mas PARA QUE ST
#include <list>               //? Invesitgar mas PARA QUE ST
#include <thread>             //? Invesitgar mas PARA QUE ST
#include <atomic>             //? Invesitgar mas PARA QUE ST
#include <condition_variable> //? Invesitgar mas PARA QUE ST

// TODO---------------------------TODO
// TODO____PERSONAL libraries_____TODO
// TODO---------------------------TODO
#include "settings/console.h"

// TODO--------------TODO
// TODO___Settings___TODO
// TODO--------------TODO

/*#ifndef UNICODE //? Invesitgar mas PARA QUE ST
#error Please enable UNICODE for your compiler! VS: Project Properties -> General -> \
Character Set -> Use Unicode. Thanks! - Javidx9
#endif*/

/*#pragma once                      //? Invesitgar mas PARA QUE ST
#pragma comment(lib, "winmm.lib") //? Invesitgar mas PARA QUE ST
*/

// TODO----------------TODO
// TODO____Calls_______TODO
// TODO----------------TODO
using namespace std;

// TODO -------------------------------------------------------------------------------------TODO
// TODO_________________________________________ MAIN _______________________________________TODO
// TODO -------------------------------------------------------------------------------------TODO

int main()
{
    setConfigC();
    return 0;
}