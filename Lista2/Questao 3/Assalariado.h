#pragma once
#include "Funcionario.h"

class Assalariado: public Funcionario
{
private:
    double salario;
public:
    Assalariado();
    
    virtual double calcularSalario ();
    double getsalario();
    void setsalario(double salario);
};
