#include "Pato.hpp"

int Pato::numPato = 0;

Pato::Pato(int idade, const string &sexo, float peso, float valor_kg)
: Animal(idade, sexo, peso, valor_kg)
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
/*virtual*/ void Pato::imprimir() const{
    cout << "*********************************" << endl;
    cout << "Tipo de animal: Pato" << endl;
    Animal::imprimir();
    cout << "Preco da carne: " << preco() << endl;
    cout << "*********************************" << endl;
}

/*static*/ int Pato::getNumPato(){
    return numPato;
}