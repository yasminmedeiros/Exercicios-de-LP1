#pragma once
#include <exception>
#include <string>

class ValorMuitoAcimaException : public std::exception
{
private:
    std::string mensagem="Erro, valor muito acima.\n";
public:
    ValorMuitoAcimaException(/* args */);
    std::string getMensagem();
};

