#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_
#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include <iostream>

using namespace std;

class Funcionario: public Pessoa {

public:

    Funcionario();
    Funcionario(const Funcionario & func);
    Funcionario(const string & nm, const string & cpf, int mat, float sb, int ch, float ht);

    int getMatricula() const;
    float getSalarioBase ()const;
    int getCargaHoraria() const;
    float getHorasTrabalhadas() const;
    float calculaSalarioBruto();

    bool setMatricula(int matricula_);
    bool setSalarioBase (float salario_base_);
    bool setCargaHoraria(int carga_horaria_);
    bool setHorasTrabalhadas(float horas_trabalhadas_);

protected:
    float calculaBonus();

private:
    int matricula;
    float salario_base;
    int carga_horaria;
    float horas_trabalhadas;

};

#endif