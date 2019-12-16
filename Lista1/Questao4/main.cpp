#include <iostream>
#include "Data.h"
#include <string>


using namespace std;

int main (void){
    int d,m,a;
    

    cout<<"Digite uma data:"<<endl;
    cout<<"\tdia: ";
    cin>>d;
    cout<<"\tmes: ";
    cin>>m;
    cout<<"\tano: ";
    cin>>a;

    Data *data= new Data(d,m,a);


    cout<<"Data: "<<data->getDia()<<" de ";
    cout<<data->getMesExtenso()<<" de "<<data->getAno()<<endl;
    
    if(data->IsBissexto()==1)
        {cout<<"Eh um ano bissexto"<<endl;}
    else
        {cout<<"Nao eh um ano bissexto"<<endl;}

    cout<<"Digite uma data para comparar:"<<endl;
    cout<<"\tdia: ";
    cin>>d;
    cout<<"\tmes: ";
    cin>>m;
    cout<<"\tano: ";
    cin>>a;

    switch(data->Compara(d,m,a))
    {
        case -1:
            cout<<"Data menor que a inserida para comparacao"<<endl;
            break;
        case 0:
            cout<<"Datas Iguais"<<endl;
            break;
        case 1:
            cout<<"Data maior que a inserida para comparacao"<<endl;
            break;

    }
    return 0;
}