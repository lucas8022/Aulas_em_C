#ifndef _PATO_HPP_
#define _PATO_HPP_

#include "Animal.hpp"

class Pato : public Animal {
    public:
    
    Pato(int idade, const string & sexo, float peso);
    void setPreco_Kg(float kg);
    float getPreco_Kg();
    virtual void som() const; 
    virtual void comer();
    virtual void mover();
    virtual float preco() const;
    virtual void imprimir() const;

    static int getNumPato();

    private:
    float peso_pato = getPeso();
    static int numPato;
    float preco_kg = 40;

    //~Pato();
};
#endif