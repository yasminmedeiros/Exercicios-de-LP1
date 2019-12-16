#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>

class ControleDePagamentos
{
    public:
        ControleDePagamentos();

        void setPagamentos(int pos, double valor, std::string nome);
        double calculaTotalDePagamentos();
        int existePagamentoParaFuncionario(std::string nome);
        virtual ~ControleDePagamentos();

    private:
        Pagamento pagamentos[30];

};

#endif // CONTROLEDEPAGAMENTOS_H
