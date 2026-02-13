#include <windows.h>
#include "Interface.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Interface sistema;
    sistema.run();
    
    return 0;
}