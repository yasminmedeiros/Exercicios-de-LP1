#include <sstream>
#include "MesadeRestaurante.h"
#define MAX 50
using namespace std;

MesadeRestaurante::MesadeRestaurante()
{
    indice=0;
}
void MesadeRestaurante::adicionaAoPedido(Pedido ped)
{
    for(int i=0;i<MAX;i++){
        if(pedidos[i].getDescricao()==ped.getDescricao()){
            pedidos[i].setQuant( pedidos[i].getQuant() + ped.getQuant() );
            return;
        }
    }
    pedidos[indice]=ped;
    indice++;
    return;
}
std::string MesadeRestaurante::toString(){
    std::string saida;
    stringstream total;
    total << calculaTotal();
    for(int i=0;i<indice;i++){
            saida+= pedidos[i].toString() + "\n";

    }
    saida+="Total: " + total.str();
}
void MesadeRestaurante::zeraPedidos (){
    for(int i=0;i<MAX;i++){
        pedidos[i].setQuant(0);
    }
}
double MesadeRestaurante::calculaTotal ()
{   double total=0;
    for(int i=0;i<MAX;i++){
        total+= pedidos[i].getQuant() * pedidos[i].getPreco();
    }
    return total;
}
