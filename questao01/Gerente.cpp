#include "Gerente.hpp"
#include "Funcionario.hpp"

Gerente::Gerente(){}

Gerente::Gerente(const Gerente & ger) {
    nome = ger.nome;
    setCPF(ger.getCPF());
    setSalarioBase(ger.getSalarioBase());
    setCargaHoraria(ger.getCargaHoraria());
}

void Gerente::setQtdHoras(int qtd_horas_){
    if (qtd_horas_ >= getCargaHoraria()){
    }
}

void Gerente::setQtdFunc(int qtd_func_){
    qtd_func = qtd_func_;
}

void Gerente::setPassword(string password_){
    password = password_;
} 

bool Gerente::alterarSenha(string old_pass, string NewPass){
    if (password == old_pass || password == "") {
        password = NewPass;
        return true;
    }
    else {
        return false;
    }
}

int Gerente::getQtdHoras(){
    return qtd_horas;
}

int Gerente::getQtdFunc(){
    return qtd_func;
}
