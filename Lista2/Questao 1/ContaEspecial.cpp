#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nomeCliente, 
                             double salarioMensal,int numeroConta,double saldo)
{
    setnomeCliente(nomeCliente);
    setsalarioMensal(salarioMensal);
    setnumeroConta(numeroConta);
    definirLimite();
    double limite = getlimite();
    setsaldo(saldo+limite);
}

ContaEspecial::ContaEspecial()
    {Conta("",0,0,0);}

void ContaEspecial::definirLimite()
    {this->setlimite(this->getsalarioMensal()*3);}
void ContaEspecial::sacar (double valor){
    if(getsaldo()>=valor){
        setsaldo(getsaldo()-valor);
    }
}
void ContaEspecial::depositar (double valor)
    {setsaldo(getsaldo()+valor);}

