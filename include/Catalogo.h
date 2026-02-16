#ifndef CATALOGO
#define CATALOGO

#include "Linha.h"
#include <vector>

class Catalogo
{
    private:
        std::vector<Linha> linhas;
    
    public:
        const std::vector<Modelo> & buscar_modelos_linha(const std::string & nome) const;
        const std::vector<Linha> & get_linhas() const;
        Catalogo();
};

#endif