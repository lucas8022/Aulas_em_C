#include "Estagiario.hpp"


Estagiario::Estagiario()
: Estagiario("", "",0,0,0,0,0,TipoEstagiario::Universitario) {}

Estagiario::Estagiario(const Funcionario & estagiario)
{ 
    setNome(estagiario.getNome());
    setCPF(estagiario.getCPF());
    setMatricula(estagiario.getMatricula());
    setSalarioBase(estagiario.getSalarioBase());

}
Estagiario::Estagiario(const string & nm, const string & cpf, int mat, float sb, int ch, float ht, float tempo, TipoEstagiario tipo){
}

bool Estagiario::setTempoRestante(float tempo_restante_){
 if ( tempo_restante_ >= 0){
    tempo_restante = tempo_restante_;
    return true;
}else {
    return false;
}
}

void Estagiario::setTipoestagiario(TipoEstagiario tipo){
   tipo_estagiario = tipo;
}

float Estagiario::getTempoRestante() const{
    return tempo_restante;
}

TipoEstagiario Estagiario::getTipoEstagiario() const{
    return tipo_estagiario;
}

float Estagiario::calculaBonus() const{
    if (tempo_restante != 0){
        if (tipo_estagiario == TipoEstagiario::JovemAprendiz){
            return (getSalarioBase() *0.05) / tempo_restante;
        }
        {
            return (getSalarioBase() * 0.1) / tempo_restante;
            // estagiario universitario
        }
    }
    else {
        return 0;
    }
}

float Estagiario::calculaSalarioBruto() const{
    return (getSalarioBase() * getHorasTrabalhadas()) / getCargaHoraria() + calculaBonus();

}

