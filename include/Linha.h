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
        std::string & get_nome ();
        std::vector<Modelo> & get_modelos();
};

#endif