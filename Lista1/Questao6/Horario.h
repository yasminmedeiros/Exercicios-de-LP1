#ifndef HORARIO_H
#define HORARIO_H
#include <iostream>

class Horario
{
private:
   int hora,minuto,segundo;
public:
    Horario();
    Horario(int hora,int minuto, int segundo);
    
    void setHora (int hora);
    void setMinuto (int minuto);
    void setSegundo (int segundo);
    
    int getHora();
    int getMinuto();
    int getSegundo();

    void setHorario (int hora,int minuto, int segundo);
    void avancarHorario();
    void Padrao ();
};
#endif