//#include "Pessoa.hpp"
//#include "PessoaFisica.hpp"
//#include "PessoaJuridica.hpp"
#include "Funcionario.hpp"

class Gerente: public Funcionario {
private:
    int qtd_func;
    int qtd_horas;
    string password;

public:
    Gerente();
    Gerente(const Gerente & ger);
    void setQtdHoras(int qtd_horas_);
    void setQtdFunc(int qtd_func_);
    void setPassword(string password_);

    bool alterarSenha(string old_pass, string NewPass);

    int getQtdHoras();
    int getQtdFunc();

protected:

};
