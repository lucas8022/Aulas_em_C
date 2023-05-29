#include "Cliente.hpp"

Cliente::Cliente() : Cliente("", "", "", ""){}

Cliente::Cliente(const Cliente & cliente){
    nome = cliente.nome;
    CPF = cliente.CPF;
    telefone = cliente.telefone;
    endereco = cliente.endereco;
}

Cliente::Cliente(const string & n, const string & cpf, const string & tel, const string & end)
    : PessoaFisica(n, cpf) {
    setTelefone(tel);
    setEndereco(end);
} 

string Cliente::getTelefone() const{
    return telefone;
}
string Cliente::getEndereco() const{
    return endereco;
}

void Cliente::setTelefone(const string & telefone_){
    telefone = telefone_;
}
void Cliente::setEndereco(const string & endereco_){
    endereco = endereco_;
}
