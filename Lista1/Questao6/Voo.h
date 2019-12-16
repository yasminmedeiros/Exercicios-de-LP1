#ifndef VOO_H
#define VOO_H
#include <iostream>
#include "Data.h"
#include "Horario.h"

class Voo
{
private:
    Data data;
    Horario horario;
    int ar[100];
    static int id;
public:
    Voo(Data data, Horario horario);
    int proximoLivre();
    bool verifica(int i);
    bool ocupa(int i);
    int vagas();
    int getNumVoo();
    Data getData();
    Horario getHorario();
};
#endif


