#include "Linha.h"
#include <string>

Linha::Linha(const std::string & nome_linha, std::vector<Modelo> modelos_linha)
    : nome(nome_linha),
    modelos(modelos_linha)
{

}   

const std::string & Linha::get_nome () const
{
    return nome;
}

const std::vector<Modelo> & Linha::get_modelos() const
{
    return modelos;
}