#include "Interface.h"
#include <string>
#include <iostream>

Interface::Interface()
    : catalogo()
{    
}

void Interface::run ()
{
    bool executando = true;
    while(executando)
    {   
        int op;
        exibir_menu_inicial();
        std::cin >> op;

        switch (op)
        {
        case 1:
        {
            std::string nome;
            exibir_menu_linhas();
            std::cin >> nome;

            std::vector<Modelo> modelo_escolhido = catalogo.buscar_modelos_linha(nome);

            std::cout << "\n==============================\n";
            std::cout << "Modelos da Linha " <<nome;
            std::cout << "\n==============================\n";
            for (auto nome_modelo : modelo_escolhido)
            {
                std::cout << nome_modelo.getNome() << "\n";
            }
            break;
        }

        case 2:
        {
            std::cout << "\n==============================\n";
            std::cout << "Linhas existentes " ;
            std::cout << "\n==============================\n";

            for (auto nome_linhas : catalogo.get_linhas())
            {
                std::cout << nome_linhas.get_nome() << "\n";
            }
            break;
        }

        case 3:
        {
            for( auto linha : catalogo.get_linhas())
            {
                std::cout << "\n==============================\n";
                std::cout << "Modelos da Linha " <<linha.get_nome();
                std::cout << "\n==============================\n";
                for (auto nome_modelo : linha.get_modelos())
                {
                    std::cout << nome_modelo.getNome() << "\n";
                }
            }
            break;
        }

        case 4:
        {
            std::cout << "Digite uma opção válida.\n";
            break;
        }

        default:
            executando = false;
            break;
        }
    }
}

void Interface::exibir_menu_inicial()
{
    std::cout <<"\n\n(1) Exibir Menu de Seleção de Linhas disponíveis;"
              <<"\n(2) Exibir todas as linhas disponíveis;"
              <<"\n(3) Exibir todos modelos de Medidores de Energia;"
              <<"\n(4) Sair da Aplicação.\n";
}


void Interface::exibir_menu_linhas()
{
    std::cout << "Digite a opção de linha que deseja exibir:\n";
    for (auto linha : catalogo.get_linhas())
    {
        std::cout << linha.get_nome() << "\n";
    }
}