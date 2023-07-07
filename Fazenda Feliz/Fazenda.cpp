#include "Fazenda.hpp"

Fazenda::Fazenda()
: Fazenda("", 0, "", "") // fazenda sem paramentros 
{
}
Fazenda::Fazenda(const string &nome, float dimensao, const string &cidade, const string &estado){
    setNome(nome);
    setDimensao(dimensao); // construtor com paramentros e so parecia verificar a dimensão 
    setCidade(cidade); // pq o resto é string 
    setEstado(estado);
}
void Fazenda::setNome(string n){
    nome = n;
}
void Fazenda::setDimensao(float di){
    if(di > 0){
        dimensao = di;    
    } else {
        cout << "ERRO: VALOR INVALIDO" << endl;
    }
}
void Fazenda::setCidade(string ci){
    cidade = ci;
}
void Fazenda::setEstado(string es){
    estado = es;
}

string Fazenda::getNome(){
    return nome;
}
float Fazenda::getDimensao(){
    return dimensao;
}
string Fazenda::getCidade(){
    return cidade;
}
string Fazenda::getEstado(){
    return estado;
}

void Fazenda::AddAnimal(Animal * nimal){
    Animais.push_back(nimal); // metodo push_back que adiciona um novo elemento no final do vetor, após seu último elemento atual.
}
void Fazenda::RemoveAnimal(int pos){
    if (pos >= 0 && pos < Animais.size()){
        cout << "Retirou animal posicao " << pos << endl;
        //delete Animais[pos]; // delete o animal da pos 
        Animais.erase(Animais.begin() + pos); // metodo erase Remove do vetor um único elemento (posição) ou um intervalo de elementos ([primeiro, último)).
        // metodo begin Retorna um iterador apontando para o primeiro elemento no vetor. 
        // basicamente o erase tem como paramentros o begin() + posicao q quero tirar
    }
}
int Fazenda::getN_Animais(){
    return Animais.size(); // metodo size() que retorna o tamanho do vector
}

float Fazenda::calculaPrecoTotal(){
    float total = 0;
    for (Animal * animal : Animais){
        total += animal->preco(); // bem basico percorrre o vector e vai somando 
    }       // -> pois aqui estamos falando de ponteiros 
    return total;
}

float Fazenda::calculaPrecoAnimal(int pos){
    if(pos >= 0 && pos < Animais.size()){
        return Animais[pos]->preco(); // retorna o preco do animal na posição desejado
    }else {
        return 0;
    }
}


void Fazenda::imprimir(){
    cout << "*********************************" << endl;
    cout << "Nome da Fazenda: " << nome << endl;
    cout << "Dimensao: " << dimensao  << " m^2"<< endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl; // imprimir bem basico que mostrar os atributos
    cout << "Numero de Animais: " << getN_Animais() << endl;
    cout << "Numero de Boi: " << NumBoi() << endl; // retorna a numeros de animais em geral 
    cout << "Numero de Porco: " << NumPorco() << endl; // tbm retorna o numero de animais especificos
    cout << "Numero de Pato: " << NumPato() << endl;
    cout << "Numero de Galinha: " << NumGalinha() << endl;
    cout << "*********************************" << endl;

    cout << "Para cada animal" << endl;
    for (Animal * animal : Animais){ // tbm imprimi todos os animais em geral 
        animal->imprimir();
        cout << endl;
    }
}

Fazenda::~Fazenda(){
    Animais.clear(); // destrutor do vector que limpa o vector
}


int Fazenda::NumPorco(){
        int contador = 0;
        for(Animal * animal : Animais){
            if(dynamic_cast<Porco*>(animal) != nullptr){ // dymanic_cast é um operador de conversão dinamica, 
                //basicamente neste exemplo ele tenta converter um ponteiro de animal em algum animal especifico
                //neste exemplo é o porco, então se ele conseguir a converção, ou seja, o resultado será um ponteiro válido para porco
                //caso ele não conseguia a converção ele da nullptr. Q OPERADOR MASSA
                contador++;
            }
        }
        return contador;
}
int Fazenda::NumBoi(){
        int contador = 0;
        for(Animal * animal : Animais){
            if(dynamic_cast<Boi*>(animal) != nullptr){
                contador++;
            }
        }
        return contador;
}
int Fazenda::NumPato(){
        int contador = 0;
        for(Animal * animal : Animais){
            if(dynamic_cast<Pato*>(animal) != nullptr){
                contador++;
            }
        }
        return contador;
}
int Fazenda::NumGalinha(){
        int contador = 0;
        for(Animal * animal : Animais){
            if(dynamic_cast<Galinha*>(animal) != nullptr){
                contador++;
            }
        }
        return contador;
}
