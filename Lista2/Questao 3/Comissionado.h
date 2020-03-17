#pragma once
#include "Funcionario.h"

class Comissionado: public Funcionario
{
private:
    double vendasSemanais;
    double percentualComissao;
public:
    Comissionado();
    virtual double calcularSalario ();
    double getvendasSemanais();
    double getpercentualComissao();
    void setvendasSemanais(double vendasSemanais);
    void setpercentualComissao(double percentualComissao);
};