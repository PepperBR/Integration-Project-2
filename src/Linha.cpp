#include "Linha.h"
#include <string>

Linha::Linha(const std::string & nome_linha, std::vector<Modelo> modelos_linha)
    : nome(nome_linha),
    modelos(modelos_linha)
{

}   

std::string & Linha::get_nome ()
{
    return nome;
}

std::vector<Modelo> & Linha::get_modelos()
{
    return modelos;
}