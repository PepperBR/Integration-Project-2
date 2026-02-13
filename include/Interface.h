#ifndef INTERFACE_H
#define INTERFACE_H

#include "Catalogo.h"
#include <vector>

class Interface
{
    private:
        Catalogo catalogo;
        void exibir_menu_inicial();
        void exibir_menu_linhas();

    public:
        Interface();
        void run();
};

#endif