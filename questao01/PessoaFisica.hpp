#ifndef _PESSOA_FISICA_HPP_
#define _PESSOA_FISICA_HPP_

#include "Pessoa.hpp"

using namespace std;

class PessoaFisica: public Pessoa {
    public:
        PessoaFisica();
        PessoaFisica(const string & n, const string & cpf);

        string getCPF() const;
        void setCPF(const string & cpf);

    private:

    protected:
        string CPF;
};

#endif