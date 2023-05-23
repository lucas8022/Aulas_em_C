#include "Pessoa.hpp"

Pessoa::Pessoa(){
    setNome("");
}

Pessoa::Pessoa(const string & n){
    setNome(n);

}

void Pessoa::setNome(const string & n){
    setNome(n);

}
string Pessoa::getNome() const{
    return nome;
}
