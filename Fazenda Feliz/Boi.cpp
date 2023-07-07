#include "Boi.hpp"

int Boi::numBoi = 0;


Boi::Boi(int idade, const string &sexo, float peso)
: Animal(idade, sexo, peso) // construtor de animal
{
    numBoi++; // atributo estatico 
}
/*virtual*/ void Boi::som() const{
    cout << "Boi disse: muuuu" << endl; // metodo de som do boi
} 
/*virtual*/ void Boi::comer(){ // metodo comer do boi
    cout << "Boi alimentou-se" << endl;
    peso_boi += 5;
    setPeso(peso_boi);
    if (peso_boi > 600){ // verifica se o peso for > que 600 vai ser travado/ limitado em 600 kg
        peso_boi = 600;
        setPeso(peso_boi);
    }
}
/*virtual*/ void Boi::mover(){
    cout << "Boi moveu-se" << endl;
    peso_boi -= peso_boi * 0.004; // boi anda vai queimar 0.004 kg do peso atual
    setPeso(peso_boi);
}
/*virtual*/ float Boi::preco() const {
    return getPeso() * preco_kg; // preco = peso * valor do kg
}
/*virtual*/ void Boi::imprimir() const{
    cout << "*********************************" << endl;
    cout << "Tipo de animal: Boi" << endl; // sobreeescreveu o metodo imprimir para o Boi 
    Animal::imprimir(); // utilizado o imprimir de animal pois é padrão
    cout << "Preco da carne: R$ " << preco() << endl;
    cout << "*********************************" << endl;
}
/*static*/ int Boi::getNumBoi(){
    return numBoi; // parte do atributo static
}
void Boi::setPreco_Kg(float kg){
    if (kg > 0){
        preco_kg = kg; // set e get valor/kg padrao
    } else {
        cout << "ERRO: PRECO INVALIDO" << endl;
        exit(1);
    }
}
float Boi::getPreco_Kg(){
    return preco_kg;
}