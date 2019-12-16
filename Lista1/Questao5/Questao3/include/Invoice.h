#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    public:

        Invoice();
        Invoice(int n, int q, std::string d, float p);

        int getNumero();
        int getQuantidade();
        std::string getDescricao();
        float getPreco();

        void setNumero(int n);
        void setQuant(int n);
        void setDescricao(std::string d);
        void setPreco(float p);
        float GetInvoiceAmount ();


    private:

        int numero, quantidade;
        std::string descricao;
        float preco;
};

#endif // INVOICE_H
