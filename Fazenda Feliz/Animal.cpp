#include "Animal.hpp"

Animal::Animal(int idade, const string &sexo, float peso)
: sexo(sexo)
{
    setIdade(idade);
    setPeso(peso);
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

int Animal::getIdade() const{
    return idade;
}
string Animal::getSexo() const{
    return sexo;
}
float Animal::getPeso() const{
    return peso;
}

/*virtual*/ void Animal::imprimir() const{
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Peso: " << peso << endl;
} 