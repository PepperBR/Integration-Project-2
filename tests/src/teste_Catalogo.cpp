#include "catch.hpp"
#include "Modelo.h"
#include "Interface.h"

namespace ragc
{
TEST_CASE("Test if after initializing, the variables are correct in the catalogo")
{
    Catalogo catalogo;
    std::vector<Linha> linhas_existentes = catalogo.get_linhas();

    SECTION("Verifying if it contains Linha : Ares")
    {
        bool existe = false;
        for (auto linha : linhas_existentes)
        {
            if(linha.get_nome() == "Ares")
            {
                existe = true;
            }

        }
        REQUIRE(existe);
    }

    SECTION("Verifying if it contains Linha : Apolo")
    {
        bool existe = false;
        for (auto linha : linhas_existentes)
        {
            if(linha.get_nome() == "Apolo")
            {
                existe = true;
            }

        }
        REQUIRE(existe);
    }

    SECTION("Verifying if it contains Linha : Zeus")
    {
        bool existe = false;
        for (auto linha : linhas_existentes)
        {
            if(linha.get_nome() == "Zeus")
            {
                existe = true;
            }

        }
        REQUIRE(existe);
    }

    SECTION("Verifying if it contains Linha : Cronos")
    {
        bool existe = false;
        for (auto linha : linhas_existentes)
        {
            if(linha.get_nome() == "Cronos")
            {
                existe = true;
            }

        }
        REQUIRE(existe);
    }

    SECTION("Verifying if it dosent contain Linha : Pimenta")
    {
        bool existe = false;
        for (auto linha : linhas_existentes)
        {
            if(linha.get_nome() == "Pimenta")
            {
                existe = true;
            }

        }
        REQUIRE_FALSE(existe);
    }

    SECTION("Verifying if it dosent contain Linha : Brasil")
    {
        bool existe = false;
        for (auto linha : linhas_existentes)
        {
            if(linha.get_nome() == "Brasil")
            {
                existe = true;
            }

        }
        REQUIRE_FALSE(existe);
    }

    SECTION("Verifying if linha Ares contains : Ares 7031 ")
    {  
        bool existe = false;

        std::string modelo_procurado = "Ares 7031";
        std::vector<Modelo> modelos_existentes = catalogo.buscar_modelos_linha("Ares");

        for (auto modelo : modelos_existentes)
        {
            if(modelo.getNome() == modelo_procurado)
            {
                existe = true;
            }
        }
        REQUIRE(existe);
    }

    SECTION("Verifying if linha Zeus contains : Zeus 8021 ")
    {  
        bool existe = false;

        std::string modelo_procurado = "Zeus 8021";
        std::vector<Modelo> modelos_existentes = catalogo.buscar_modelos_linha("Zeus");
        
        for (auto modelo : modelos_existentes)
        {
            if(modelo.getNome() == modelo_procurado)
            {
                existe = true;
            }
        }
        REQUIRE(existe);
    }

    SECTION("Verifying if linha Cronos contains : Cronos 6003 ")
    {  
        bool existe = false;

        std::string modelo_procurado = "Cronos 6003";
        std::vector<Modelo> modelos_existentes = catalogo.buscar_modelos_linha("Cronos");
        
        for (auto modelo : modelos_existentes)
        {
            if(modelo.getNome() == modelo_procurado)
            {
                existe = true;
            }
        }
        REQUIRE(existe);
    }

    SECTION("Verifying if linha Apolo contains : Apolo 6031 ")
    {  
        bool existe = false;

        std::string modelo_procurado = "Apolo 6031";
        std::vector<Modelo> modelos_existentes = catalogo.buscar_modelos_linha("Apolo");
        
        for (auto modelo : modelos_existentes)
        {
            if(modelo.getNome() == modelo_procurado)
            {
                existe = true;
            }
        }
        REQUIRE(existe);
    }

    SECTION("Verifying if linha Ares contains : Ares 7031 ")
    {  
        bool existe = false;

        std::string modelo_procurado = "Ares 7031";
        std::vector<Modelo> modelos_existentes = catalogo.buscar_modelos_linha("Ares");
        
        for (auto modelo : modelos_existentes)
        {
            if(modelo.getNome() == modelo_procurado)
            {
                existe = true;
            }
        }
        REQUIRE(existe);
    }

    SECTION("Verifying if linha Ares contains : Ares 1234 ")
    {  
        bool existe = false;

        std::string modelo_procurado = "Ares 1234";
        std::vector<Modelo> modelos_existentes = catalogo.buscar_modelos_linha("Ares");
        
        for (auto modelo : modelos_existentes)
        {
            if(modelo.getNome() == modelo_procurado)
            {
                existe = true;
            }
        }
        REQUIRE_FALSE(existe);
    }

    SECTION("Verifying if linha Pimenta contains : Pimenta 1234 ")
    {  
        bool existe = false;

        std::string modelo_procurado = "Pimenta 1234";
        std::vector<Modelo> modelos_existentes = catalogo.buscar_modelos_linha("Pimenta");
        
        for (auto modelo : modelos_existentes)
        {
            if(modelo.getNome() == modelo_procurado)
            {
                existe = true;
            }
        }
        REQUIRE_FALSE(existe);
    }
}
}