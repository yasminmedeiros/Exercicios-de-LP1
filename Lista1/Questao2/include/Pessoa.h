#ifndef PESSOA_H
#define PESSOA_H
#include <string>


class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string nome,int idade, std::string telefone);

        int getIdade();
        std::string getTelefone ();
        std::string getNome();

        void setIdade (int idade);
        void setTelefone (std::string telefone);
        void setNome (std::string nome);

        virtual ~Pessoa();

    private:
        std::string nome,telefone;
        int idade;
};

#endif // PESSOA_H
