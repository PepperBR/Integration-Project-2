#ifndef MODELO_H
#define MODELO_H

#include <string>

class Modelo
{
    private:
        std::string nome;
        
    public:
        Modelo (const std::string& nome_modelo);
        const std::string getNome() const;
        
};

#endif