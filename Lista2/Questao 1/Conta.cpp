#include "Conta.h"

Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta,double saldo)
{
    setnomeCliente(nomeCliente);
    setsalarioMensal(salarioMensal);
    setnumeroConta(numeroConta);
    definirLimite();
    double limite = getlimite();
    setsaldo(saldo+limite);
}
Conta::Conta()
{
    setnomeCliente("");
    setsalarioMensal(0.00);
    setnumeroConta(0000);
    setsaldo(0.00);
}

std::string Conta::getnomeCliente()
    {return this->nomeCliente;}
double Conta::getsalarioMensal()
    {return this->salarioMensal;}
int Conta::getnumeroConta()
    {return this->numeroConta;}
double Conta::getsaldo()
    {return this->saldo;}
double Conta::getlimite()
    {return this->limite;}

void Conta::setnomeCliente(std::string nome)
    {this->nomeCliente=nome;}
void Conta::setsalarioMensal(double salario)
    {this->salarioMensal=salario;}
void Conta::setnumeroConta(int numero)
    {this->numeroConta=numero;}
void Conta::setsaldo(double saldo)
    {this->saldo=saldo;}
void Conta::setlimite(double limite)
    {this->limite=limite;}

void Conta::definirLimite() 
    {setlimite(getsalarioMensal()*2);}

void Conta::sacar (double valor){
    if(getsaldo()>=valor){
        setsaldo(getsaldo()-valor);
    }
}
void Conta::depositar (double valor)
    {setsaldo(getsaldo()+valor);}