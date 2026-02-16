#include "catch.hpp"
#include "Modelo.h"
#include "Interface.h"

namespace jmcp
{

bool check_line(const std::string &nome, const std::vector<Linha> &linhas)
{
    for (auto linha : linhas)
    {
        if(linha.get_nome() == nome)
        {
            return true;
        }
    }
    return false;  
}

bool check_model(const std::string & modelo_procurado, const std::vector<Modelo> & modelos_existentes)
{
    for (auto modelo : modelos_existentes)
    {
        if(modelo.getNome() == modelo_procurado)
        {
            return true;
        }
    }
    return false;
}

TEST_CASE("Test if after initializing, the variables are correct in the catalogo")
{
    Catalogo catalogo;
    std::vector<Linha> linhas_existentes = catalogo.get_linhas();

    SECTION("Verifying if it dosent contain Linha : Pimenta")
    {
        REQUIRE_FALSE(check_line("Pimenta",linhas_existentes));
    }

    SECTION("Verifying if it dosent contain Linha : Brasil")
    {
        REQUIRE_FALSE(check_line("Brasil",linhas_existentes));
    }

    SECTION("Verifying if linha Ares contains : Ares 1234 ")
    {  
        REQUIRE_FALSE(check_model("Ares 1234",catalogo.buscar_modelos_linha("Ares")));
    }

    SECTION("Verifying if linha Pimenta contains : Pimenta 1234 ")
    {  
        REQUIRE_FALSE(check_model("Pimenta 1234",catalogo.buscar_modelos_linha("Pimenta")));
    }

    SECTION("Verifying if changing the Catalogo will get us an error, Changing Linha Zeus:")
    {
        std::vector<Linha> linhas_teste_mudanca = catalogo.get_linhas();
        REQUIRE(linhas_teste_mudanca.size() == 4);
        REQUIRE(linhas_teste_mudanca[0].get_nome() == "Zeus");
        REQUIRE(linhas_teste_mudanca[1].get_nome() == "Apolo");
        REQUIRE(linhas_teste_mudanca[2].get_nome() == "Cronos");
        REQUIRE(linhas_teste_mudanca[3].get_nome() == "Ares");

        REQUIRE(linhas_teste_mudanca[0].get_modelos().size() == 3);
        REQUIRE(linhas_teste_mudanca[0].get_modelos()[0].getNome() == "Zeus 8021");
        REQUIRE(linhas_teste_mudanca[0].get_modelos()[1].getNome() == "Zeus 8023");
        REQUIRE(linhas_teste_mudanca[0].get_modelos()[2].getNome() == "Zeus 8031");

        REQUIRE(linhas_teste_mudanca[1].get_modelos().size() == 1);
        REQUIRE(linhas_teste_mudanca[1].get_modelos()[0].getNome() == "Apolo 6031");

        REQUIRE(linhas_teste_mudanca[2].get_modelos().size() == 7);
        REQUIRE(linhas_teste_mudanca[2].get_modelos()[0].getNome() == "Cronos 6001-A");
        REQUIRE(linhas_teste_mudanca[2].get_modelos()[1].getNome() == "Cronos 6021-A");
        REQUIRE(linhas_teste_mudanca[2].get_modelos()[2].getNome() == "Cronos 6021L");
        REQUIRE(linhas_teste_mudanca[2].get_modelos()[3].getNome() == "Cronos 6003");
        REQUIRE(linhas_teste_mudanca[2].get_modelos()[4].getNome() == "Cronos 7023");
        REQUIRE(linhas_teste_mudanca[2].get_modelos()[5].getNome() == "Cronos 7023L");
        REQUIRE(linhas_teste_mudanca[2].get_modelos()[6].getNome() == "Cronos 7023 2,5");

        REQUIRE(linhas_teste_mudanca[3].get_modelos().size() == 6);
        REQUIRE(linhas_teste_mudanca[3].get_modelos()[0].getNome() == "Ares 7021");
        REQUIRE(linhas_teste_mudanca[3].get_modelos()[1].getNome() == "Ares 7031");
        REQUIRE(linhas_teste_mudanca[3].get_modelos()[2].getNome() == "Ares 7023");
        REQUIRE(linhas_teste_mudanca[3].get_modelos()[3].getNome() == "Ares 8023");
        REQUIRE(linhas_teste_mudanca[3].get_modelos()[4].getNome() == "Ares 8023 15");
        REQUIRE(linhas_teste_mudanca[3].get_modelos()[5].getNome() == "Ares 8023 200");
    }
}
}