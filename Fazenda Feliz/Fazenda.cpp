#include "Fazenda.hpp"

Fazenda::Fazenda()
: Fazenda("", 0, "", "")
{
}
Fazenda::Fazenda(const string &nome, float dimensao, const string &cidade, const string &estado){
    setNome(nome);
    setDimensao(dimensao);
    setCidade(cidade);
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
    Animais.push_back(nimal);
}
void Fazenda::RemoveAnimal(int pos){
    if (pos >= 0 && pos < Animais.size()){
        delete Animais[pos];
        Animais.erase(Animais.begin() + pos);
}
}
int Fazenda::getN_Animais(){
    return Animais.size();
}
/*
float Fazenda::calculaPrecoTotal(){
    float total = 0;
    for (Animal * animal : Animais){
        total += animal->preco();
}
}
float Fazenda::calculaPrecoAnimal(int pos){
    if(pos >= 0 && pos < Animais.size()){
        return Animais[pos]->preco();
}else {
    return 0;
}
}
*/

void Fazenda::imprimir(){
    cout << "*********************************" << endl;
    cout << "Nome da Fazenda: " << nome << endl;
    cout << "Dimensao: " << dimensao  << " m^2"<< endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "Numero de Animais: " << getN_Animais() << endl;
    cout << "Numero de Boi: " << NumBoi() << endl;
    cout << "Numero de Porco: " << NumPorco() << endl;
    cout << "Numero de Pato: " << NumPato() << endl;
    cout << "Numero de Galinha: " << NumGalinha() << endl;
    cout << "*********************************" << endl;
}
/*
Fazenda::~Fazenda(){
    Animais.clear();
}
*/

int Fazenda::NumPorco(){
    return Porco::getNumPorco();
}
int Fazenda::NumBoi(){
    return Boi::getNumBoi();
}
int Fazenda::NumPato(){
    return Pato::getNumPato();
}
int Fazenda::NumGalinha(){
    return Galinha::getNumGalinha();
}