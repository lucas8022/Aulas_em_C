#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include <iostream>
#include <string>

using namespace std;

class Animal {

    public:
    Animal(int idade,  const string &sexo, float peso); // construtor animal

    void setIdade(int i); // set idade
    void setSexo(string s); // set sexo
    void setPeso(float p); // set peso

    int getIdade() const;
    string getSexo() const;
    float getPeso() const;

    virtual void som() const = 0; // funcao virtual do som
    virtual void mover() = 0; // do mover
    virtual void comer() = 0; // do comer 
    virtual float preco() const = 0; // do preco por kg 

    virtual void imprimir() const; 

    // tudo virtual pq cada animal vai ter seu metodo som, mover, comer, preco e imprimir


    private: // ta private mas podia ser protected
    int idade;
    string sexo;
    float peso;

};

#endif 