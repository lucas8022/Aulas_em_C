#include "Boi.hpp"

int Boi::numBoi = 0;


Boi::Boi(int idade, const string &sexo, float peso, float valor_kg)
: Animal(idade, sexo, peso, valor_kg)
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
/*virtual*/ void Boi::imprimir() const{
    cout << "*********************************" << endl;
    cout << "Tipo de animal: Boi" << endl;
    Animal::imprimir();
    cout << "Preco da carne: " << preco() << endl;
    cout << "*********************************" << endl;
}
/*static*/ int Boi::getNumBoi(){
    return numBoi;
}