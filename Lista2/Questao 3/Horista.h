#pragma once
#include "Funcionario.h"

class Horista: public Funcionario
{
private:
    double salarioPorHora;
    double horasTrabalhadas;
public:
    Horista();
    virtual double calcularSalario ();
    double getsalarioPorHora();
    double gethorasTrabalhadas();
    void setsalarioPorHora(double salarioPorHora);
    void sethorasTrabalhadas(double horasTrabalhadas);
};