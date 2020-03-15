#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException() throw(){
}
std::string SaldoNaoDisponivelException::getMensagem (){return this->mensagem;}