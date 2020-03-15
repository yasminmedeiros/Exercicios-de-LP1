#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

void RestauranteCaseiro::adicionaAoPedido(Pedido p, int numMesa) {
    mesa[numMesa].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante() {
    double total = 0;
    for (int i = 0 ; i< 50 ; i++) {
        total += mesa[i].calculaTotal();
    }
    return total;
}

std::string RestauranteCaseiro::toString() {
    std::string saida;
    for (int i=0 ; i<50 ; i++) {
        if (mesa[i].calculaTotal() > 0)
            saida += mesa[i].toString() + "\n";
    }
    return saida;
}
