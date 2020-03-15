#pragma once
#include "Conta.h"
class ContaEspecial : public Conta
{
private:
    
public:
   ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta,double saldo);
   ContaEspecial();
   virtual void definirLimite();
   virtual void sacar (double valor);
   virtual void depositar (double valor);
};
