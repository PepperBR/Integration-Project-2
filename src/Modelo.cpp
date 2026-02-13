#include "Modelo.h"
    
Modelo::Modelo(const std::string& nome_modelo) 
    : nome(nome_modelo) 
{
}

const std::string & Modelo::getNome() const {
    return nome;
}

