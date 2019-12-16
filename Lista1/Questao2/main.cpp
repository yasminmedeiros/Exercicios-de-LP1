#include <iostream>
#include "Pessoa.h"
#include <string>
using namespace std;

int main()
{
    Pessoa pessoa1, pessoa2;
    int idade;
    string nome,telefone;

    cout<<"Cadastro pessoa 1:"<<endl;
    cout<<"\tDigite o nome: ";
    cin>>nome;
    cout<<"\n\tDigite o numero do telefone: ";
    cin>>telefone;
    cout<<"\n\tDigite a idade: ";
    cin>>idade;

    pessoa1.setIdade(idade);
    pessoa1.setNome(nome);
    pessoa1.setTelefone(telefone);

    cout<<"Cadastro pessoa 2:"<<endl;
    cout<<"\tDigite o nome: ";
    cin>>nome;
    cout<<"\n\tDigite o numero do telefone: ";
    cin>>telefone;
    cout<<"\n\tDigite a idade: ";
    cin>>idade;

    pessoa2.setIdade(idade);
    pessoa2.setNome(nome);
    pessoa2.setTelefone(telefone);

    cout<<"Pessoa 1: "<<pessoa1.getNome()<<", "<<pessoa1.getIdade()<<" anos, "<<pessoa1.getTelefone()<<" eh seu telefone."<<endl;
    cout<<"Pessoa 2: "<<pessoa2.getNome()<<", "<<pessoa2.getIdade()<<" anos, "<<pessoa2.getTelefone()<<" eh seu telefone."<<endl;

}
