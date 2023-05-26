#ifndef _ESTAGIARIO_HPP_
#define _ESTAGIARIO_HPP_

#include "Funcionario.hpp"

enum TipoEstagiario{
    JovemAprendiz, Universitario
};

class Estagiario : public Funcionario {
    public:
        Estagiario();
        Estagiario(const Funcionario & estagiario);
        Estagiario(const string & nm, const string & cpf, int mat, float sb, int ch, float ht, float tempo, TipoEstagiario tipo);

        bool setTempoRestante(float tempo_restante_);
        void setTipoestagiario(TipoEstagiario tipo);

        float getTempoRestante() const;
        TipoEstagiario getTipoEstagiario() const;

    private:
        float tempo_restante;
        TipoEstagiario tipo_estagiario;

        float calculaBonus() const;
        float calculaSalarioBruto() const;
};


#endif