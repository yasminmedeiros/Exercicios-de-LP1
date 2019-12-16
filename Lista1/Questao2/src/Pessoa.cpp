#include "Pessoa.h"
#include <string>

Pessoa::Pessoa()
{
    setIdade(0);
    setTelefone("000000000");
    setNome("");
}
Pessoa::Pessoa(std::string nome,int idade, std::string telefone)
{
    setIdade(idade);
    setTelefone(telefone);
    setNome(nome);
}

int Pessoa::getIdade(){return this->idade;}
std::string Pessoa::getTelefone (){return this->telefone;}
std::string Pessoa::getNome(){return this->nome;}

void Pessoa::setIdade (int idade){this->idade=idade;}
void Pessoa::setTelefone (std::string telefone){this->telefone=telefone;}
void Pessoa::setNome (std::string nome){this->nome=nome;}

Pessoa::~Pessoa()
{
    //dtor
}
