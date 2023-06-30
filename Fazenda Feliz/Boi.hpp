#ifndef _BOI_HPP_
#define _BOI_HPP_

#include "Animal.hpp"

class Boi : public Animal{
    public:
    
    Boi(int idade, const string &sexo, float peso, float valor_kg);
    virtual void som() const ; 
    virtual void comer() ;
    virtual void mover() ;
    virtual void imprimir() const ;

    static int getNumBoi();

    private:
    float peso_boi = getPeso();
    static int numBoi;
};

#endif