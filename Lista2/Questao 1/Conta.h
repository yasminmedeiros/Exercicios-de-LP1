#pragma once
#include "IConta.h"
#include <string>
class Conta : public IConta
{
protected:
    std::string nomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
    double limite;
public:
    Conta(std::string nomeCliente, double salarioMensal, int numeroConta,double saldo);
    Conta();
    std::string getnomeCliente();
    double getsalarioMensal();
    int getnumeroConta();
    double getsaldo();
    double getlimite();
    
    void setnomeCliente(std::string nome);
    void setsalarioMensal(double salario);
    void setnumeroConta(int numero);
    void setsaldo(double saldo);
    void setlimite(double limite);
    
    virtual void definirLimite();
    virtual void sacar (double valor);
    virtual void depositar (double valor);

};
