#include "PessoaFisica.hpp"
#include <iostream>
#include <string>

PessoaFisica::PessoaFisica(){

setNome("");
setCPF("");
}

PessoaFisica::PessoaFisica(const string & n, const string & cpf){
    setNome(n);
    setCPF(cpf);
}

void PessoaFisica::setCPF(const string & cpf){
    setCPF(cpf);
}

string PessoaFisica::getCPF() const{
    return CPF;
}