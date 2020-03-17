#pragma once
#include <iostream>
#include <string>

class Funcionario
{
protected:
    std::string nome;
    int matricula;
public:
    Funcionario();
    virtual double calcularSalario();
    
    std::string getnome();
    int getmatricula();

    void setnome(std::string nome);
    void setmatricula(int matricula);
};
