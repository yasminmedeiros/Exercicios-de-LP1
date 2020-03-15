#include "Pedido.h"
#include <sstream>
#include <string>


using namespace std;

int Pedido::quantAtualPedidos=0;

Pedido::Pedido()
{
    quant=0;
    preco=0;
    num=quantAtualPedidos;
    quantAtualPedidos++;
}

Pedido::Pedido(int quant, double preco, std::string descricao) 
{
    Pedido();
    this->descricao=descricao;
    this->quant=quant;
    this->preco=preco;
}
std::string Pedido::toString()
{
    stringstream ssNum;
    ssNum << this->num;
    stringstream ssQuant;
    ssQuant << this->quant;
    stringstream ssPreco;
    ssPreco << this->preco;

    return "num: " + ssNum.str() + " , desc: " + this->descricao + " , quant: " + ssQuant.str() + " , preco: " + ssPreco.str();
}
int Pedido::getQuant(){return this ->quant;}
void Pedido::setQuant(int q){quant=q;}
std::string Pedido::getDescricao (){return this->descricao;}
double Pedido::getPreco(){return preco;}
