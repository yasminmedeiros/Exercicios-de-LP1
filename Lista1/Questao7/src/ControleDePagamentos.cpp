#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <string>
ControleDePagamentos::ControleDePagamentos()
{
    for(int i=0;i<30;i++){
        pagamentos[i].setValorDoPagamento(0.0);
        pagamentos[i].setNomeDoFuncionario("");
    }
}
void ControleDePagamentos::setPagamentos(int pos, double valor, std::string nome)
{
    pagamentos[pos].setValorDoPagamento(valor);
    pagamentos[pos].setNomeDoFuncionario(nome);
}
double ControleDePagamentos::calculaTotalDePagamentos()
{
    double total=0;
    for(int i=0;i<30;i++){
        total+=pagamentos[i].getValorDoPagamento();
    }
    return total;
}
int ControleDePagamentos::existePagamentoParaFuncionario(std::string nome)
{
    int indice, existencia;
    for(int i=0;i<30;i++){
        if(nome==pagamentos[i].getNomeDoFuncionario()){
            indice=i;
            break;
            existencia++;
        }
    }
    if(pagamentos[indice].getValorDoPagamento()>0){return 1;}
    return 0;
}

ControleDePagamentos::~ControleDePagamentos()
{
}
