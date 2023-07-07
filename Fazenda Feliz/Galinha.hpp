#ifndef _GALINHA_HPP_
#define _GALINHA_HPP_

#include "Animal.hpp"

class Galinha : public Animal{
    public:
    
    Galinha(int idade, const string &sexo, float peso);
    static void setPreco_Kg(float kg);
    static float getPreco_Kg();
    virtual void som() const; 
    virtual void comer();
    virtual void mover();
    virtual float preco() const;
    virtual void imprimir() const; 

    static int getNumGalinha();

    private:
    float peso_galinha = getPeso();
    static int numGalinha;
    static float preco_kg;

    //~Galinha();
};

#endif