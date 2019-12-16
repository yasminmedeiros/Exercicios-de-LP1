#include "Data.h"
#include <string>

Data::Data()
{
    Padrao();
}
void Data::Padrao()
{
    setDia(1);
    setMes(1);
    setAno(1);
}
Data::Data(int dia, int mes, int ano)
{
    if (dia>31 || dia <1)
        {Padrao();}
    else if(mes>12 || mes <1)
        {Padrao();}
    else 
        {setDia(dia);
        setMes(mes);
        setAno(ano);}
}
int Data::Compara(int dia, int mes, int ano)
{
    if(this->ano>ano){return 1;}
    if(this->ano<ano){return -1;}
    if(this->mes>mes){return 1;}
    if(this->mes<mes){return -1;}
    if(this->dia>dia){return 1;}
    if(this->dia<dia){return -1;}
    return 0; 
}
std::string Data::getMesExtenso()
{
    switch(getMes())
    {
        case 1: 
            return "janeiro";
            break;
        case 2: 
            return "fevereiro";
            break;
        case 3: 
            return "março";
            break;
        case 4: 
            return "abril";
            break;
        case 5: 
            return "maio";
            break;
        case 6: 
            return "junho";
            break;
        case 7: 
            return "julho";
            break;
        case 8: 
            return "agosto";
            break;
        case 9: 
            return "setembro";
            break;
        case 10: 
            return "outubro";
            break;
        case 11: 
            return "novembro";
            break;
        case 12: 
            return "dezembro";
            break; 
    }
}
bool Data::IsBissexto()
{
    if(ano%4 == 0 && ano%100 != 0)
        {return 1;}
    else {return 0;}
}

int Data::getDia() {return this->dia;}
int Data::getMes() {return this->mes;}
int Data::getAno() {return this->ano;}

void Data::setDia(int dia) {this->dia=dia;}
void Data::setMes(int mes) {this->mes=mes;}
void Data::setAno(int ano) {this->ano=ano;}