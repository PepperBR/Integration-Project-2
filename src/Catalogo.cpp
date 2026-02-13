#include "Catalogo.h"
#include <string.h>
#include <vector>

Catalogo::Catalogo()
    : linhas()
{
    // Linha Zeus
    std::vector<Modelo> modelo_zeus;
    modelo_zeus.emplace_back("Zeus 8021");
    modelo_zeus.emplace_back("Zeus 8023");
    modelo_zeus.emplace_back("Zeus 8031");
    
    std::string nome_zeus = "Zeus";
    linhas.push_back(Linha(nome_zeus, modelo_zeus));

    // Linha Apolo
    std::vector<Modelo> modelo_apolo;
    modelo_apolo.emplace_back("Apolo 6031");
    
    std::string nome_apolo = "Apolo";
    linhas.push_back(Linha(nome_apolo, modelo_apolo));

    // Linha Cronos
    std::vector<Modelo> modelo_cronos;
    modelo_cronos.emplace_back("Cronos 6001-A");
    modelo_cronos.emplace_back("Cronos 6021-A");
    modelo_cronos.emplace_back("Cronos 6021L");
    modelo_cronos.emplace_back("Cronos 6003");
    modelo_cronos.emplace_back("Cronos 7023");
    modelo_cronos.emplace_back("Cronos 7023L");
    modelo_cronos.emplace_back("Cronos 7023 2,5");
    
    std::string nome_cronos = "Cronos";
    linhas.push_back(Linha(nome_cronos, modelo_cronos));

    // Linha Ares
    std::vector<Modelo> modelo_ares;
    modelo_ares.emplace_back("Ares 7021");
    modelo_ares.emplace_back("Ares 7031");
    modelo_ares.emplace_back("Ares 7023");
    modelo_ares.emplace_back("Ares 8023");
    modelo_ares.emplace_back("Ares 8023 15");
    modelo_ares.emplace_back("Ares 8023 200");
    
    std::string nome_ares = "Ares";
    linhas.push_back(Linha(nome_ares, modelo_ares));

}

std::vector<Modelo> Catalogo::buscar_modelos_linha(const std::string & nome)
{
    for (auto modelo : linhas)
    {
        if(modelo.get_nome() == nome)
        {
            return modelo.get_modelos();
        }
    }
    return {};
}

std::vector<Linha> & Catalogo::get_linhas()
{
    return linhas;
}



