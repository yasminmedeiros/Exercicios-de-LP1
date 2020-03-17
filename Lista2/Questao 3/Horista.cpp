#include "Horista.h"
Horista::Horista(){}
double Horista::calcularSalario (){
    return 1039+((gethorasTrabalhadas()-40)*1.5*getsalarioPorHora());
}
double Horista::getsalarioPorHora(){return this->salarioPorHora;}
double Horista::gethorasTrabalhadas(){return horasTrabalhadas;}
void Horista::setsalarioPorHora(double salarioPorHora){this->salarioPorHora=salarioPorHora;}
void Horista::sethorasTrabalhadas(double horasTrabalhadas){this->horasTrabalhadas= horasTrabalhadas;}