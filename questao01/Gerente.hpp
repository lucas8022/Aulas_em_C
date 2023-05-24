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
    Gerente(string password_);
    void setQtdHoras(int qtd_horas_);
    void setQtdFunc(int qtd_func_);
    void setPassword(string password_);

    bool alterarSenha(string & password_, string NewPass);

    int getQtdHoras();
    int getQtdFunc();
    string getPassword();


protected:

};
