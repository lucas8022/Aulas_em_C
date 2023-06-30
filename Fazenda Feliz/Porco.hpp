#ifndef _PORCO_HPP_
#define _PORCO_HPP_

#include "Animal.hpp"

class Porco : public Animal{

    public:
    
    Porco(int idade, const string &sexo, float peso, float valor_kg);
    virtual void som() const; 
    virtual void comer();
    virtual void mover();
    virtual void imprimir() const;

    static int getNumPorco();

    private:
    float peso_porco = getPeso();
    static int numPorco;
};

#endif