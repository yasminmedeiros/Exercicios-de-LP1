#include <iostream>
#include "Voo.h"

using namespace std;

int main (void){
    Data data1=Data(14,12,2019);
    Horario horario1=Horario(12,31,59);
    Data data2=Data(20,01,2020);
    Horario horario2=Horario(1,35,0);
    Voo *voo1= new Voo(data1,horario1);
    Voo *voo2= new Voo(data2,horario2);
    

    bool ocupa1A=voo1->ocupa(2);
    bool ocupa1B=voo1->ocupa(0);
    bool ocupa1C=voo1->ocupa(0);
    bool verifica1A=voo1->verifica(2);
    bool verifica1B=voo1->verifica(3);
    
    int numVagas=voo1->vagas();
    int prox=voo1->proximoLivre();
    int id2=voo2->getNumVoo();
    Horario h = voo1->getHorario();
    Data d=voo1->getData();

    cout<<"Se a ocupação da vaga foi bem sucedida: "<<ocupa1A<<endl;
    cout<<"Se a ocupação da vaga foi bem sucedida: "<<ocupa1B<<endl;
    cout<<"Se a ocupação da vaga foi bem sucedida: "<<ocupa1C<<endl;
    cout<<"Se a vaga esta disponivel: "<<verifica1A<<endl;
    cout<<"Se a vaga esta disponivel: "<<verifica1B<<endl;
    cout<<"Numero de vagas disponiveis: "<<numVagas<<endl;
    cout<<"Assento mais proximo do 0: "<<prox<<endl;
    cout<<"Numero de identificacao do Voo2: "<<id2<<endl;


    return 0;
    
}
