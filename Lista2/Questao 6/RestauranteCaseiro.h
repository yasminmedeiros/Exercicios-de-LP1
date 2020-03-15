#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesadeRestaurante.h"
#define MAX2 50

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido p, int numMesa);
        double calculaTotalRestaurante();
        std::string toString();

    private:
    MesadeRestaurante mesa[MAX2];
};

#endif // RESTAURANTECASEIRO_H
