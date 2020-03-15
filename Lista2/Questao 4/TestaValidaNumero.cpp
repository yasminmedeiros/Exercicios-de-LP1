#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero(/* args */){}
void TestaValidaNumero::validaNumero(int num){
    try{
        if(num<=0){
            ValorAbaixoException e =ValorAbaixoException();
            throw e;
        }if(num>100 && num <1000){
            ValorAcimaException e = ValorAcimaException();
            throw e;
        }if (num>=1000){
            ValorMuitoAcimaException e = ValorMuitoAcimaException ();
            throw e;
        }

    }catch( ValorAbaixoException e){
        std::cout<<e.getMensagem();
    }catch( ValorMuitoAcimaException e){
        std::cout<<e.getMensagem();
    }catch( ValorAcimaException e){
        std::cout<<e.getMensagem();
    }
}

