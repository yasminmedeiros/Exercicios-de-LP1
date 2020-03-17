#include "Funcionario.h"

Funcionario::Funcionario(){

}

double Funcionario::calcularSalario(){}

std::string Funcionario::getnome(){return this->nome;}
int Funcionario::getmatricula(){return this->matricula;}

void Funcionario::setnome(std::string nome){ this->nome=nome;}
void Funcionario::setmatricula(int matricula){ this->matricula=matricula;}