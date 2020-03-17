#include "SistemaGerenciaFolha.h"
#include <string>
#include <iostream>

int main (void){
    SistemaGerenciaFolha sistema;
    //sistema.setFuncionarios();
    //sistema.setFuncionarios();
    //sistema.setFuncionarios();
    std::string nome;
    std::cout<<"Digite o nome que voce deseja buscar: \n";
    std::cin>>nome;
    try{
        
        if(sistema.consultaSalarioFuncionario(nome)==0){
            FuncionarioNaoExisteException e = FuncionarioNaoExisteException ();
            throw e;
        }else{
            std::cout<<"O salario de "<<nome<<" eh "<< sistema.consultaSalarioFuncionario(nome);
        }
    }catch(FuncionarioNaoExisteException e){
        std::cout<<e.getMensagem();
    }
    sistema.calculaValorTotalFolha();
    return 0;
}