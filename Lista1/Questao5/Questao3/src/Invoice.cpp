#include "Invoice.h"
#include <string>

Invoice::Invoice()
{
    setNumero(0);
    setDescricao("");
    setQuant(0);
    setPreco(0.0);
}
Invoice::Invoice(int n, int q, std::string d, float p)
{
    setNumero(n);
    setDescricao(d);
    setQuant(q);
    setPreco(p);
}
void Invoice::setNumero(int n){this->numero = n;}
void Invoice::setQuant(int n){this->quantidade = n>0 ? n: 0;}
void Invoice::setDescricao(std::string d ){this->descricao = d;}
void Invoice::setPreco(float n){this->preco = n>0 ? n: 0.0;}


int Invoice::getNumero(){return this->numero;}
int Invoice::getQuantidade(){return this->quantidade;}
std::string Invoice::getDescricao(){return this->descricao;}
float Invoice::getPreco(){return this->preco;}

float Invoice::GetInvoiceAmount (){return quantidade*preco;}

