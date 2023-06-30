#include "Porco.hpp"

int Porco::numPorco = 0;

Porco::Porco(int idade, const string &sexo, float peso)
: Animal(idade, sexo, peso)
{
    numPorco++;
}
/*virtual*/ void Porco::som() const{
    cout << "Porco disse: oinc oinc, iiihhh" << endl;
}
/*virtual*/ void Porco::comer(){
    peso_porco += 2;
    setPeso(peso_porco);
    if (peso_porco > 120){
        peso_porco = 120;
        setPeso(peso_porco);
    }
}
/*virtual*/ void Porco::mover(){
    peso_porco -= peso_porco*0.003;
    setPeso(peso_porco);
}
/*virtual*/ float Porco::preco() const {
    return getPeso() * preco_kg;
}
/*virtual*/ void Porco::imprimir() const{
    cout << "*********************************" << endl;
    cout << "Tipo de animal: Porco" << endl;
    Animal::imprimir();
    cout << "Preco da carne: " << preco() << endl;
    cout << "*********************************" << endl;
}

/*static*/ int Porco::getNumPorco(){
    return numPorco;
}
void Porco::setPreco_Kg(float kg){
    if (kg > 0){
        preco_kg = kg;
    } else {
        cout << "ERRO: PRECO INVALIDO" << endl;
        exit(1);
    }
}
float Porco::getPreco_Kg(){
    return preco_kg;
}

Porco::~Porco(){
    numPorco--;
}