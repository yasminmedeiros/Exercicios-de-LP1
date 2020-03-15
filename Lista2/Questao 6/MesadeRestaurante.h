#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <string>
#include "Pedido.h"
#define MAX 50


class MesadeRestaurante
{
    public:
        MesadeRestaurante();
        void adicionaAoPedido(Pedido ped);
        std::string toString();
        void zeraPedidos ();
        double calculaTotal ();

    protected:

    private:
        Pedido pedidos[MAX];
        int indice;
};

#endif // MESADERESTAURANTE_H
