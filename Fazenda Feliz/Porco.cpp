#include "Porco.hpp"

int Porco::numPorco = 0;

Porco::Porco(int idade, const string &sexo, float peso, float valor_kg)
: Animal(idade, sexo, peso, valor_kg)
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