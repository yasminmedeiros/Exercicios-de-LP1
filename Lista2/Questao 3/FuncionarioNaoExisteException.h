#pragma once
#include <string>
#include <exception>


class FuncionarioNaoExisteException : public std::exception
{
public:
    FuncionarioNaoExisteException ();
    std::string getMensagem();

private:
    std::string mensagem="Não existe esse funcionário cadastrado."; 
};
