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
    float dimensao;
    string cidade;
    string estado;
    vector <Animal *> Animais;

    public:
    Fazenda();
    Fazenda(const string & nome, float dimensao, const string &cidade, const string &estado);
    void setNome(string n);
    void setDimensao(float di);
    void setCidade(string ci);
    void setEstado(string es);

    string getNome();
    float getDimensao();
    string getCidade();
    string getEstado();

    void AddAnimal(Animal * nimal);
    void RemoveAnimal(int pos);
    int getN_Animais();
    //float calculaPrecoTotal();
    //float calculaPrecoAnimal(int pos);

    int NumPorco();
    int NumBoi();
    int NumPato();
    int NumGalinha();

    void imprimir();
    //~Fazenda();
};

#endif