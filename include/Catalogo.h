#ifndef CATALOGO
#define CATALOGO

#include "Linha.h"
#include <vector>
#include <array>

class Catalogo
{
    private:
        static const std::vector<Linha> linhas;
    
    public:
        const std::vector<Modelo> & buscar_modelos_linha(const std::string & nome) const;
        const std::vector<Linha> & get_linhas() const;
        Catalogo();
};

#endif