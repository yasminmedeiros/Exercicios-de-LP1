#include "ContaEspecial.h"
#include "Conta.h"

#include <iostream>
#include <string>


using namespace std;

int main(){
    Conta *yasmin= new Conta("Yasmin", 1500,15,300);
    ContaEspecial *layla = new ContaEspecial("Layla", 2000, 16, 200);
    

    cout << "Nome: " << yasmin->getnomeCliente() << endl;
    cout << "Conta:" << yasmin->getnumeroConta() << endl;
    cout << "Limite: " << yasmin->getlimite() << endl;
    cout << "Saldo: " << yasmin->getsaldo() << endl;
    yasmin->sacar(200);
    yasmin->depositar(400);
    cout<<"\nApós o saque e deposito:"<<endl;
    cout << "Nome: " << yasmin->getnomeCliente() << endl;
    cout << "Conta:" << yasmin->getnumeroConta() << endl;
    cout << "Limite: " << yasmin->getlimite() << endl;
    cout << "Saldo: " << yasmin->getsaldo() << endl;
    cout<<"\nConta Especial:"<<endl;
    cout << "Nome: " << layla->getnomeCliente() << endl;
    cout << "Conta:" << layla->getnumeroConta() << endl;
    cout << "Limite: " << layla->getlimite()<< endl;
    cout << "Saldo: " << layla->getsaldo() << endl;
    
    layla->sacar(200);
    layla->depositar(400);
    
    cout<<"\nApós o saque e deposito:"<<endl;
    cout << "Nome: " << layla->getnomeCliente() << endl;
    cout << "Conta:" << layla->getnumeroConta() << endl;
    cout << "Limite: " << layla->getlimite()<< endl;
    cout << "Saldo: " << layla->getsaldo() << endl;
    return 0;
}
