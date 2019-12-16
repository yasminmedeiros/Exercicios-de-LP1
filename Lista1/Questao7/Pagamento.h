#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{
    public:
        Pagamento();
        Pagamento(std::string nomeDoFuncionario, double valorDoPagamento);

        std::string getNomeDoFuncionario();
        double getValorDoPagamento ();

        void setNomeDoFuncionario(std::string nome);
        void setValorDoPagamento (double valor);

        virtual ~Pagamento();

    private:
        std::string nomeDoFuncionario;
        double valorDoPagamento;
};

#endif // PAGAMENTO_H
