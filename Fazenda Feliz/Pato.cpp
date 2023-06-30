#include "Pato.hpp"

int Pato::numPato = 0;

Pato::Pato(int idade, const string &sexo, float peso)
: Animal(idade, sexo, peso)
{
    numPato++;
}
/*virtual*/ void Pato::som() const{
    cout << "Pato disse: quá quá" << endl;
} 
/*virtual*/ void Pato::comer(){
    peso_pato += 0.5;
    setPeso(peso_pato);
    if (peso_pato > 4.5){
        peso_pato = 4.5;
        setPeso(peso_pato);
    }
}
/*virtual*/ void Pato::mover(){
    peso_pato -= peso_pato * 0.002;
    setPeso(peso_pato);
}
/*virtual*/ float Pato::preco() const {
    return getPeso() * preco_kg;
}
/*virtual*/ void Pato::imprimir() const{
    cout << "*********************************" << endl;
    cout << "Tipo de animal: Pato" << endl;
    Animal::imprimir();
    cout << "*********************************" << endl;
}

/*static*/ int Pato::getNumPato(){
    return numPato;
}
void Pato::setPreco_Kg(float kg){
    if (kg > 0){
        preco_kg = kg;
    } else {
        cout << "ERRO: PRECO INVALIDO" << endl;
        exit(1);
    }
}
float Pato::getPreco_Kg(){
    return preco_kg;
}

Pato::~Pato(){
    numPato--;
}