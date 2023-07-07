#ifndef _PORCO_HPP_
#define _PORCO_HPP_

#include "Animal.hpp"

class Porco : public Animal{

    public:
    
    Porco(int idade, const string &sexo, float peso);
    static void setPreco_Kg(float kg);
    static float getPreco_Kg();
    virtual void som() const; 
    virtual void comer();
    virtual void mover();
    virtual float preco() const;
    virtual void imprimir() const;

    static int getNumPorco();

    private:
    float peso_porco = getPeso();
    static int numPorco;
    static float preco_kg;

    //~Porco();
};

#endif