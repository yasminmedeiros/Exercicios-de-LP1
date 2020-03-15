#pragma once
#include <exception>
#include <string>

class ValorAcimaException : public std::exception
{
private:
    std::string mensagem="Erro, valor acima.\n";
public:
    ValorAcimaException(/* args */);
    std::string getMensagem();
};
