#include "Comissionado.h"
Comissionado::Comissionado(){}
double Comissionado::calcularSalario (){
    return 1039.00+(getvendasSemanais()*getpercentualComissao()/100);
 }
double Comissionado::getvendasSemanais(){return this->vendasSemanais;}
double Comissionado::getpercentualComissao(){return this->percentualComissao;}
void Comissionado::setvendasSemanais(double vendasSemanais){this->vendasSemanais=vendasSemanais;}
void Comissionado::setpercentualComissao(double percentualComissao){this->percentualComissao=percentualComissao;}