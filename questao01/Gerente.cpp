#include "Gerente.hpp"
#include "Funcionario.hpp"

Gerente::Gerente()
    : Gerente("","",0,0,0,0,0,0,"") 
    {
        
    }

Gerente::Gerente(const Gerente & ger) {
    nome = ger.nome;
    setCPF(ger.getCPF());
    setSalarioBase(ger.getSalarioBase());
    setCargaHoraria(ger.getCargaHoraria());
    setMatricula(ger.getMatricula());
    setHorasTrabalhadas(ger.getHorasTrabalhadas());

    password = ger.password;
    qtd_horas = ger.qtd_horas;
    qtd_func = ger.qtd_func;

}

Gerente::Gerente(const string & nm, const string & cpf, int mat, float sb, int ch, float ht, int n_func,  int q_horas, string senha)
    : Funcionario(nm, cpf, mat, sb, ch, ht)
{
    setQtdFunc(n_func);
    qtd_horas = q_horas >= 0 ? q_horas : 0;
    senha = password;

}

float Gerente::calculaSalarioBruto(){
    return Funcionario::calculaSalarioBruto() + calculaBonus();
}

float Gerente::calculaBonus() const{
     float valor_horas_execedentes = (getSalarioBase() *1.5)/ getCargaHoraria();
}

void Gerente::setQtdHoras(int qtd_horas_){
    if (qtd_horas_ >= 0){
        if(qtd_horas_ > getCargaHoraria()){
            qtd_horas = getHorasTrabalhadas() - getCargaHoraria();
            setHorasTrabalhadas(qtd_horas_);
        }
        else {
            setHorasTrabalhadas(qtd_horas);
        }
        
    }
}

void Gerente::setQtdFunc(int qtd_func_){
    if (qtd_func_ >= 0){
        qtd_func = qtd_func_;
    }
}

void Gerente::setPassword(string password_){
    password = password_;
} 

bool Gerente::alterarSenha(const string & old_pass,const string & NewPass){
    if (password == old_pass) {
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

bool Gerente::autenticar(const string & pass){
    if(password == pass){
        return true;
    }
    else {
        return false;
    }

}

