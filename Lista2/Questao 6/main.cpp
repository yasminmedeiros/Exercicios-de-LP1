#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    RestauranteCaseiro *restaurante = new RestauranteCaseiro() ;

    Pedido p1=Pedido( 1, 4,"Espetinho");
    Pedido p2=Pedido( 1, 6,"Cerveja 600ml");
    Pedido p3=Pedido( 3, 6,"Cerveja 600ml");
    Pedido p4=Pedido( 1, 6,"Caipirinha");
    restaurante->adicionaAoPedido(p1,1);
    restaurante->adicionaAoPedido(p2,2);
    restaurante->adicionaAoPedido(p3,1);
    restaurante->adicionaAoPedido(p4,2);
    double totalArrecadado = restaurante->calculaTotalRestaurante();
    cout << p1.toString() << endl;
    cout<<restaurante->toString()<<endl;
    return 0;
}
