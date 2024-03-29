#ifndef _BOI_HPP_
#define _BOI_HPP_

#include "Animal.hpp"

class Boi : public Animal{ 
    public:
    
    Boi(int idade, const string &sexo, float peso); // construtor

    static void setPreco_Kg(float kg); // set e get preco do kg caso queria mudar
    static float getPreco_Kg();
    virtual void som() const ; 
    virtual void comer() ; // aqui vamos sobreescrever esses metodos
    virtual void mover() ;
    virtual float preco() const;
    virtual void imprimir() const ;

    static int getNumBoi(); // contador static para saber a quantidade Boi no geral

    private:
    float peso_boi = getPeso(); 
    static int numBoi; 
    static float preco_kg; // peso já estabelecido

    //~Boi();
};

#endif