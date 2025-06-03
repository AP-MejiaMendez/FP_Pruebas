#include <iostream>
#include <thread>   // std::this_thread::sleep_for
#include <chrono>   // std::chrono::milliseconds
using namespace std;

#ifdef _WIN32
    #include <windows.h>
    void clearScreen() { system("cls"); }
#else
    #include <unistd.h>
    void clearScreen() { system("clear"); }
#endif

int main() {
    std::string frames[] = {
        "(-_-)", 
        "(^_^)", 
        "(O_O)", 
        "(^_^)"
    };

    /*while (true) {
        for (auto frame : frames) {
            clearScreen();
            std::cout << frame << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
        }
    }*/

    return 0;
}
