#ifndef LINHA
#define LINHA

#include "Modelo.h"
#include <vector>

class Linha
{
    private:
        std::string nome;
        std::vector<Modelo> modelos;

    public:
        Linha(const std::string & nome_linha, std::vector<Modelo> modelos_linha);
        const std::string & get_nome () const;
        const std::vector<Modelo> & get_modelos() const;
};

#endif