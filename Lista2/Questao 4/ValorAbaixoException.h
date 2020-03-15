#pragma once
#include <exception>
#include <string>

class ValorAbaixoException
{
private:
    std::string mensagem="Erro, valor abaixo.\n";
public:
    ValorAbaixoException(/* args */);
    std::string getMensagem();
};



