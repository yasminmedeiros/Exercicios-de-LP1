#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (void){
    ifstream stream ("texto.txt", ios::in);
    ofstream stream2("texto_bkp.txt", ios::out);
    string texto;
    if(!stream.is_open()){
        cout<<"Erro ao abrir o arquivo.\n";
        return 0;
    }else{
        getline(stream,texto);
    }
    stream.close();
    cout<<texto<<endl;
    
    if(!stream2.is_open()){
        cout<<"Erro ao abrir o arquivo.\n";
        return 0;
    }else{
        stream2<<texto;
    }
    stream2.close();
    
    return 0;
}
