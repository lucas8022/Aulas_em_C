#include "Boi.hpp"

int Boi::numBoi = 0;


Boi::Boi(int idade, const string &sexo, float peso)
: Animal(idade, sexo, peso)
{
    numBoi++; // atributo estatico 
}
/*virtual*/ void Boi::som() const{
    cout << "Boi disse: muuuu" << endl;
} 
/*virtual*/ void Boi::comer(){
    peso_boi += 5;
    setPeso(peso_boi);
    if (peso_boi > 600){
        peso_boi = 600;
        setPeso(peso_boi);
    }
}
/*virtual*/ void Boi::mover(){
    peso_boi -= peso_boi * 0.004;
    setPeso(peso_boi);
}
/*virtual*/ float Boi::preco() const {
    return getPeso() * preco_kg;
}
/*virtual*/ void Boi::imprimir() const{
    cout << "*********************************" << endl;
    cout << "Tipo de animal: Boi" << endl;
    Animal::imprimir();
    cout << "*********************************" << endl;
}
/*static*/ int Boi::getNumBoi(){
    return numBoi;
}
void Boi::setPreco_Kg(float kg){
    if (kg > 0){
        preco_kg = kg;
    } else {
        cout << "ERRO: PRECO INVALIDO" << endl;
        exit(1);
    }
}
float Boi::getPreco_Kg(){
    return preco_kg;
}
Boi::~Boi(){
    numBoi--;
}