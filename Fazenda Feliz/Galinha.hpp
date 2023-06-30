#ifndef _GALINHA_HPP_
#define _GALINHA_HPP_

#include "Animal.hpp"

class Galinha : public Animal{
    public:
    
    Galinha(int idade, const string &sexo, float peso, float valor_kg);
    virtual void som() const; 
    virtual void comer();
    virtual void mover();
    virtual void imprimir() const; 

    static int getNumGalinha();

    private:
    float peso_galinha = getPeso();
    static int numGalinha;
};

#endif