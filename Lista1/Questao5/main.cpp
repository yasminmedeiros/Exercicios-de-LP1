#include <iostream>
#include "Horario.h"

using namespace std;

int main (void){
    int h,m,s;
    Horario *horario= new Horario();

    cout<<"Digite um horario:"<<endl;
    cout<<"\tHoras: ";
    cin>>h;
    cout<<"\tMinutos: ";
    cin>>m;
    cout<<"\tSegundos: ";
    cin>>s;

    horario->setHorario(h,m,s);

    cout<<horario->getHora()<<":"<<horario->getMinuto()<<":"<<horario->getSegundo()<<endl;

    horario->avancarHorario();

    cout<<horario->getHora()<<":"<<horario->getMinuto()<<":"<<horario->getSegundo()<<endl;

    return 0;

}