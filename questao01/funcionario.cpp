#include "funcionario.hpp"
#include "PessoaJuridica.hpp"

Funcionario::Funcionario() : Funcionario("", "", 0, 0, 0, 0) {}


Funcionario::Funcionario(const Funcionario & func){
    nome = func.nome;
    setCPF(func.getCPF());
    matricula = func.matricula;
    salario_base = func.salario_base;
    carga_horaria = func.carga_horaria;
    horas_trabalhadas = func.horas_trabalhadas;
}
Funcionario::Funcionario(const string & nm, const string & cpf, int mat, float sb, int ch, float ht) : PessoaFisica(nome, cpf){
    setMatricula(mat);
    setSalarioBase(sb);
    setCargaHoraria(ch);
    setHorasTrabalhadas(ht);
}

int Funcionario::getMatricula() const{
    return matricula;
}
float Funcionario::getSalarioBase ()const{
    return salario_base;
}
int Funcionario::getCargaHoraria() const{
    return carga_horaria;
}
float Funcionario::getHorasTrabalhadas() const {
    return horas_trabalhadas;
}
float Funcionario::calculaSalarioBruto() {
    return (salario_base * horas_trabalhadas) / carga_horaria + calculaBonus();
}

bool Funcionario::setMatricula(int matricula_){

}

bool Funcionario::setSalarioBase (float salario_base_){

}
bool Funcionario::setCargaHoraria(int carga_horaria_){
    if (carga_horaria_ > 0){
        carga_horaria = carga_horaria_;
        return true;
    }
    else {
        return false;
    }

}

bool Funcionario::setHorasTrabalhadas(float horas_trabalhadas_){

    if (horas_trabalhadas_ > 0 && horas_trabalhadas_ <= carga_horaria){
        horas_trabalhadas = horas_trabalhadas_;
        return true;
    }
    else {
        return false;
    }
}

float Funcionario::calculaBonus(){
    return 0;
}
