#pragma once
#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"

class SistemaGerenciaFolha 
{
private:
    Funcionario *funcionarios[100];
    int id;
public:
    SistemaGerenciaFolha();
    void setFuncionarios();
    void calculaValorTotalFolha();
    double consultaSalarioFuncionario(std::string nome);
};

