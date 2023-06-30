#ifndef _BOI_HPP_
#define _BOI_HPP_

#include "Animal.hpp"

class Boi : public Animal{
    public:
    
    Boi(int idade, const string &sexo, float peso);

    void setPreco_Kg(float kg);
    float getPreco_Kg();
    virtual void som() const ; 
    virtual void comer() ;
    virtual void mover() ;
    virtual float preco() const;
    virtual void imprimir() const ;

    static int getNumBoi();

    private:
    float peso_boi = getPeso();
    static int numBoi;
    float preco_kg;

    ~Boi();
};

#endif