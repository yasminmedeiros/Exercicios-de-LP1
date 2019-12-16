#include "Horario.h"
#include "iostream"

Horario::Horario(/* args */)
{
    setHora(0);
    setMinuto(0);
    setSegundo(0);
}
void Horario::Padrao()
{
    setHora(0);
    setMinuto(0);
    setSegundo(0);
}

Horario::Horario(int hora,int minuto, int segundo)
{
    if(hora>12 || hora<0)
        {Padrao();}
    else if(minuto>60 || minuto <0)
        {Padrao();}
    else if(segundo>60 || segundo<0)
        {Padrao();}
    else 
        {setHora(hora);
        setMinuto(minuto);
        setSegundo(segundo);}

}

void Horario::setHora (int hora){this->hora=hora;}
void Horario::setMinuto (int minuto){this->minuto=minuto;}
void Horario::setSegundo (int segundo){this->segundo=segundo;}

int Horario::getHora(){return hora;}
int Horario::getMinuto(){return minuto;}
int Horario::getSegundo(){return segundo;}

void Horario::setHorario (int hora,int minuto, int segundo)
{
    if(hora>11 || hora<0)
        {Padrao();}
    else if(minuto>60 || minuto <0)
        {Padrao();}
    else if(segundo>60 || segundo<0)
        {Padrao();}
    else 
        {setHora(hora);
        setMinuto(minuto);
        setSegundo(segundo);}
}
void Horario::avancarHorario()
{
    int hora=getHora();
    int minuto=getMinuto();
    int segundo=getSegundo();

    if(segundo==59)
        {segundo=0;
        minuto++;}
    else{segundo++;}
    if(minuto==60 && segundo==0)
        {hora++;
        minuto=0;}
    if(hora==12 &&  minuto==0 && segundo==0){
        hora=0;
    }
    setSegundo(segundo);
    setMinuto(minuto);
    setHora(hora);
  

}