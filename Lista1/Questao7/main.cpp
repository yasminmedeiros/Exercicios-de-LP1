#include <iostream>
#include "ControleDePagamentos.h"
#include <string>

using namespace std;

int main()
{
    ControleDePagamentos empresa;
    int id=0;
    double valor;
    std::string nome;
    cout << "Cadastro "<<id+1<<": " << endl;
    cout<<"\tDigite o nome do funcionario: ";
    cin>>nome;
    cout<<"\n\tDigite o valor de pagamento do funcionario: ";
    cin>>valor;
    empresa.setPagamentos(id,valor,nome);
    id++;
    cout << "Cadastro "<<id+1<<": " << endl;
    cout<<"\tDigite o nome do funcionario: ";
    cin>>nome;
    cout<<"\n\tDigite o valor de pagamento do funcionario: ";
    cin>>valor;
    empresa.setPagamentos(id,valor,nome);

    double total=empresa.calculaTotalDePagamentos();

    cout<<"O total de pagamentos eh de: "<<total<<endl;

    cout<<"---------------------------------------------"<<endl;
    cout<<"Digite o nome, o qual voce deseja saber se foi realizado pagamento: ";
    cin>>nome;

    int existencia=empresa.existePagamentoParaFuncionario(nome);
    if(existencia==1){cout<<"Existe pagamento realizado a(o) "<<nome<<endl;}
    else{cout<<"Nao existe pagamento realizado a(o) "<<nome<<endl;}
    return 0;


}
