#include <iostream>
#include <string>

#include "Invoice.h"

using namespace std;



int main()
{
    cout << "Bem-vindo ao Invoice" << endl;

    Invoice produto;

    int numero,quantidade;
    double preco;
    string descricao;

    cout>>"Digite o numero: ";
    cin<<numero<<endl;
    cout>>"Digite a quantidade: ";
    cin<<quantidade<<endl;
    cout>>"Digite o preco: ";
    cin<<preco<<endl;
    cout>>"Digite a descricao: ";
    cin<<descricao<<endl;

    produto.Invoice(numero,quantidade,descricao,preco);

    double fatura = getInvoiceAmount());

    cout<<fatura<<endl;


}
