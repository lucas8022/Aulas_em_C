#include "Galinha.hpp"

int Galinha::numGalinha = 0;
float Galinha::preco_kg = 20;

Galinha::Galinha(int idade, const string &sexo, float peso)
: Animal(idade, sexo, peso)
{
    numGalinha++;
}
/*virtual*/ void Galinha::som() const{
    cout << "Galinha disse: cocó, cocorocó" << endl;
} 
/*virtual*/ void Galinha::comer(){
    cout << "Galinha alimentou-se" << endl;
    peso_galinha += 0.2;
    setPeso(peso_galinha);
    if (peso_galinha > 1.8){
        peso_galinha = 1.8;
        setPeso(peso_galinha);
    }
}
/*virtual*/ void Galinha::mover(){
    cout << "Galinha moveu-se" << endl; 
    peso_galinha -= peso_galinha * 0.001;
    setPeso(peso_galinha);
}
/*virtual*/ float Galinha::preco() const {
    return getPeso() * preco_kg;
}
/*virtual*/ void Galinha::imprimir() const{
    cout << "*********************************" << endl;
    cout << "Tipo de animal: Galinha" << endl;
    Animal::imprimir();
    cout << "Preco da carne: R$ " << preco() << endl;
    cout << "*********************************" << endl;
}
/*static*/ int Galinha::getNumGalinha(){
    return numGalinha;
}
void Galinha::setPreco_Kg(float kg){
    if (kg > 0){
        preco_kg = kg;
    } else {
        cout << "ERRO: PRECO INVALIDO" << endl;
        exit(1);
    }
}
float Galinha::getPreco_Kg(){
    return preco_kg;
}