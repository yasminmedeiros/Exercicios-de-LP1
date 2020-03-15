#pragma once
#include <iostream>

class IConta
{
protected:
    
public:
    //IConta(/* args */);
    virtual void sacar (double valor)=0;
    virtual void depositar (double valor)=0;
    
};

