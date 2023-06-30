#include "Animal.hpp"

Animal::Animal(int idade, const string &sexo, float peso, float valor_kg)
: idade(idade), sexo(sexo), peso(peso), valor_kg(valor_kg)
{
        // corpo vazio
} // fim do construtor Animal

void Animal::setIdade(int i){
    if (i > 0){
        idade = i;
    } else { 
        cout << "ERRO: IDADE INVALIDA" << endl;
        exit(1);
    }
} // set idade
void Animal::setSexo(string s){
    sexo = s;
} // set sexo
void Animal::setPeso(float p){
    if (p > 0){
        peso = p;
    }else {
        cout << "ERRO: PESO INVALIDO" << endl;
        exit(1);
    }
} // set peso
void Animal::setValorKg(float vkg){
    valor_kg = vkg;
} // set valor / kg


int Animal::getIdade() const{
    return idade;
}
string Animal::getSexo() const{
    return sexo;
}
float Animal::getPeso() const{
    return peso;
}
float Animal::getValorKg() const{
    return valor_kg;
}
/*virtual*/ float Animal::preco() const{
    return peso * valor_kg;

}
/*virtual*/ void Animal::imprimir() const{
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Peso: " << peso << endl;
    cout << "Valor/Kg: " << valor_kg << endl; 
} 