#ifndef _FAZENDA_HPP_
#define _FAZENDA_HPP_

#include <iostream>
#include <string>
#include <vector>
#include "Animal.hpp"
#include "Porco.hpp"
#include "Galinha.hpp"
#include "Pato.hpp"
#include "Boi.hpp"

using namespace std;

class Fazenda {
    private:
    string nome;
    float dimensao; // atributos padroes da fazenda
    string cidade;
    string estado;
    vector <Animal *> Animais; // cria o vector de animais já em fazenda hpp

    public:
    Fazenda();
    Fazenda(const string & nome, float dimensao, const string &cidade, const string &estado); // construtores
    void setNome(string n);
    void setDimensao(float di); // set dos atributos padrões 
    void setCidade(string ci);
    void setEstado(string es);

    string getNome();
    float getDimensao(); // get dos atributos padrões
    string getCidade();
    string getEstado();

    void AddAnimal(Animal * nimal); // metodo que add um animal no vector 
    void RemoveAnimal(int pos); // remove uma posição do vector 
    int getN_Animais(); // retorna o tamanho do vector
    float calculaPrecoTotal(); // calcula o preco total 
    float calculaPrecoAnimal(int pos); // calcula o preco de uma certa posição

    int NumPorco();
    int NumBoi(); 
    int NumPato(); // antes retornava o atributo static de cada função, mas agora 
    int NumGalinha(); // usa o operador dynamic_cast 

    void imprimir(); // imprimi 
    ~Fazenda(); // destrutor
};

#endif