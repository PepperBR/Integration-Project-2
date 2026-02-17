#include "Catalogo.h"
#include <string.h>
#include <vector>

const std::vector<Linha> Catalogo::linhas
{
    // LINHA                            MODELOS
    {"Zeus",         { {"Zeus 8021"}, {"Zeus 8023"}, {"Zeus 8031"} }},
    {"Apolo",        { {"Apolo 6031"} }},
    {"Cronos",       { {"Cronos 6001-A"}, {"Cronos 6021-A"}, {"Cronos 6021L"}, {"Cronos 6003"}, {"Cronos 7023"}, {"Cronos 7023L"}, {"Cronos 7023 2,5"} }},
    {"Apolo",        { {{"Ares 7021"}, {"Ares 7031"}, {"Ares 7023"}, {"Ares 8023"}, {"Ares 8023 15"}, {"Ares 8023 200"}} }}
};

Catalogo::Catalogo()
{
}

// Pesquisar std::find_if std::find
const std::vector<Modelo> & Catalogo::buscar_modelos_linha(const std::string & nome) const
{
    for (const auto & modelo : linhas)
    {
        if(modelo.get_nome() == nome)
        {
            return modelo.get_modelos();
        }
    }
    return {};
}

const std::vector<Linha> & Catalogo::get_linhas() const
{
    return linhas;
}



