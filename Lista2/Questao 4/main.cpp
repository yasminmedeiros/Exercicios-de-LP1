#include "TestaValidaNumero.h"

int main (void){
    TestaValidaNumero tentativa;
    tentativa.validaNumero(-1);
    tentativa.validaNumero(200);
    tentativa.validaNumero(50000);
    tentativa.validaNumero(300);
    tentativa.validaNumero(1000);
}