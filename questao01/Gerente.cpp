#include "Gerente.hpp"
#include "Funcionario.hpp"

Gerente::Gerente() : Gerente("USUARIO SEM CADASTRO") {}

Gerente::Gerente(string password_) {
    setPassword(password);
}

void Gerente::setQtdHoras(int qtd_horas_){
    qtd_horas = qtd_horas_;
}

void Gerente::setQtdFunc(int qtd_func_){
    qtd_func = qtd_func_;
}

void Gerente::setPassword(string password_){
    password = password_;
} 

bool Gerente::alterarSenha(string & password_, string NewPass){
    
}

int Gerente::getQtdHoras(){
    return qtd_horas;
}

int Gerente::getQtdFunc(){
    return qtd_func;
}

string Gerente::getPassword(){
    return password;
}