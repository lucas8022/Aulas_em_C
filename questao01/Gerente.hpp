#ifndef _GERENTE_HPP_
#define _GERENTE_HPP_
#include "Funcionario.hpp"

class Gerente: public Funcionario {
public:
    Gerente();
    Gerente(const Gerente & ger);
    Gerente(const string & nm, const string & cpf, int mat, float sb, int ch, float ht, int n_func,  int q_horas, string senha);

    float calculaSalarioBruto();
    
    void setQtdFunc(int qtd_func_);
    void setQtdHoras(int qtd_horas_);
    void setPassword(string password_);

    int getQtdFunc();
    int getQtdHoras();

    bool alterarSenha(const string & old_pass,const string & NewPass = "");
    bool autenticar(const string & pass);
    bool setHorasTrabalhadas(float horas_trabalhadas_);


private:
    int qtd_func;
    int qtd_horas;
    string password;

    float calculaBonus() const;




};

#endif