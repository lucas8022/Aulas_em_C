#ifndef _FAZENDA_HPP_
#define _FAZENDA_HPP_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Fazenda{
    
    private:
    string nome;
    float dimensao;
    string cidade;
    string estado;

    public:

    void setNome(string n);
    void setDimensao(float di);
    void setCidade(string ci);
    void setEstado(string es);

    string getNome();
    float getDimensao();
    string getCidade();
    string getEstado();
};

#endif