#include "Galinha.hpp"

int Galinha::numGalinha = 0;

Galinha::Galinha(int idade, const string &sexo, float peso, float valor_kg)
: Animal(idade, sexo, peso, valor_kg)
{
    numGalinha++;
}
/*virtual*/ void Galinha::som() const{
    cout << "Galinha disse: cocó, cocorocó" << endl;
} 
/*virtual*/ void Galinha::comer(){
    peso_galinha += 0.2;
    setPeso(peso_galinha);
    if (peso_galinha > 1.8){
        peso_galinha = 1.8;
        setPeso(peso_galinha);
    }
}
/*virtual*/ void Galinha::mover(){
    peso_galinha -= peso_galinha * 0.001;
    setPeso(peso_galinha);
}
/*virtual*/ void Galinha::imprimir() const{
    cout << "*********************************" << endl;
    cout << "Tipo de animal: Galinha" << endl;
    Animal::imprimir();
    cout << "Preco da carne: " << preco() << endl;
    cout << "*********************************" << endl;
}
/*static*/ int Galinha::getNumGalinha(){
    return numGalinha;
}