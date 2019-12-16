#include "Pagamento.h"

Pagamento::Pagamento()
{
    setNomeDoFuncionario("");
    setValorDoPagamento(0.0);
}
Pagamento::Pagamento(std::string nomeDoFuncionario, double valorDoPagamento)
{
    setNomeDoFuncionario(nomeDoFuncionario);
    setValorDoPagamento(valorDoPagamento);
}

std::string Pagamento::getNomeDoFuncionario(){return this->nomeDoFuncionario;}
double Pagamento::getValorDoPagamento (){return this->valorDoPagamento;}

void Pagamento::setNomeDoFuncionario(std::string nome){this->nomeDoFuncionario=nome;}
void Pagamento::setValorDoPagamento (double valor){this->valorDoPagamento=valor;}


Pagamento::~Pagamento()
{
}
