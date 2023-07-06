#ifndef _PORCO_HPP_
#define _PORCO_HPP_

#include "Animal.hpp"

class Porco : public Animal{

    public:
    
    Porco(int idade, const string &sexo, float peso);
    void setPreco_Kg(float kg);
    float getPreco_Kg();
    virtual void som() const; 
    virtual void comer();
    virtual void mover();
    virtual float preco() const;
    virtual void imprimir() const;

    static int getNumPorco();

    private:
    float peso_porco = getPeso();
    static int numPorco;
    float preco_kg = 20;

    //~Porco();
};

#endif