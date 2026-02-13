#ifndef CATALOGO
#define CATALOGO

#include "Linha.h"
#include <vector>

class Catalogo
{
    private:
        std::vector<Linha> linhas;
    
    public:
        std::vector<Modelo> buscar_modelos_linha(const std::string & nome);
        std::vector<Linha> & get_linhas();
        Catalogo();
};

#endif