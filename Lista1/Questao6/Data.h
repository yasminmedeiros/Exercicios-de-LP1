#ifndef _DATA_H_
#include <iostream>
#include <string>
class Data
{
private:
    int dia,mes,ano;
public:
    Data();
    Data(int dia, int mes, int ano);
    int Compara(int dia, int mes, int ano);
    std::string getMesExtenso();
    bool IsBissexto();
    void Padrao();

    int getDia();
    int getMes();
    int getAno();

    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
};



#endif