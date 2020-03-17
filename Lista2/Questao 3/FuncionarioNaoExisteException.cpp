#include "FuncionarioNaoExisteException.h"
FuncionarioNaoExisteException::FuncionarioNaoExisteException (){
    
}
    
std::string FuncionarioNaoExisteException::getMensagem(){return this->mensagem;}