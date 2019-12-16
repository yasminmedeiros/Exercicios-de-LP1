#include "Voo.h"

int Voo::id=0;
Voo::Voo(Data data, Horario horario){
    this->data=data;
    this->horario=horario;
    for(int i=0;i<100;i++){
        this->ar[i]=0;
    }
    this->id++;
}
int Voo::proximoLivre()
{
    for(int i=0;i<100;i++){
        if(this->ar[i]==0){
            return i;
        }
    }
    return 0;
}
bool Voo::verifica(int i){
    if(this->ar[i]==0){return true;}
    else{return false;}
}
bool Voo::ocupa(int i){
    if(this->ar[i]==0){
        this->ar[i]=1;
        return true;
    }
    else{return false;}
}
int Voo::vagas(){
    int num=0;
    for(int i=0;i<100;i++){
        if (this->ar[i]==0)
        {
            num++;
        }
    }
    return num;
}
int Voo::getNumVoo(){return this->id;}
Data Voo::getData(){return this->data;}
Horario Voo::getHorario(){return this->horario;}
