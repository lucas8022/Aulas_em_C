#ifndef _CLIENTE_HPP_
#define _CLIENTE_HPP_
#include "PessoaFisica.hpp"
#include <iostream>

class Cliente : public PessoaFisica {

public:
    Cliente();
    Cliente(const Cliente & cliente);
    Cliente(const string & n, const string & cpf, const string & tel, const string & end); 

    string getTelefone() const;
    string getEndereco() const;

    void setTelefone(const string & telefone_);
    void setEndereco(const string & endereco_);

private:
    string telefone;
    string endereco;

};

#endif