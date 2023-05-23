#ifndef _PESSOA_JURIDICA_HPP_
#define _PESSOA_JURIDICA_HPP_

#include "Pessoa.hpp"

class PessoaJuridica : public Pessoa {

    public:

        PessoaJuridica();
        PessoaJuridica(const string & n, const string & name_fant_, const string & cnpj_);
        PessoaJuridica(const PessoaJuridica & pj);


        string getCNPJ();
        void setCNPJ(const string & cnpj_);

        string getNomeFantasia()const;
        void setNomeFantasia(const string & name_fant_);
    private:
        string cnpj;
        string name_fant;
};

#endif