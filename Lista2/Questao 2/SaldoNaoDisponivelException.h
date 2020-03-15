#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>
#include <string>

class SaldoNaoDisponivelException : public std::exception
{
private:
    std::string mensagem ="Nao ha saldo disponivel.\n";
public:
    SaldoNaoDisponivelException() throw();
    std::string getMensagem (); 
};
#endif