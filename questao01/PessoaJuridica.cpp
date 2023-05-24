#include "PessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica() : PessoaJuridica(" ", " ", " ") {}

PessoaJuridica::PessoaJuridica(const string & n, const string & name_fant_, const string & cnpj_) {
    setCNPJ(cnpj);
    setNomeFantasia(name_fant);
}

PessoaJuridica::PessoaJuridica(const PessoaJuridica & pj){
    nome = pj.nome;
    cnpj = pj.cnpj;
    name_fant = pj.name_fant;
}

string PessoaJuridica::getCNPJ(){
    return cnpj;
}

void PessoaJuridica::setCNPJ(const string & cnpj_){
    cnpj = cnpj_;
}

string PessoaJuridica::getNomeFantasia()const{
    return name_fant;
}

void PessoaJuridica::setNomeFantasia(const string & name_fant_){
    name_fant = name_fant_;
}




