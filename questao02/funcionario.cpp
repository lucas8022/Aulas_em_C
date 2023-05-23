
Funcionario::Funcionario() : Funcionario("", "", 0, 0, 0, 0) {}


Funcionario::Funcionario(const Funcionario & func){
    nome = func.nome;
    setCPF(func.getCPF());
    matricula = func.matricula;
    salario_base = func.salario_base;
    carga_horaria = func.carga_horaria;
    horas_trabalhadas = func.horas_trabalhadas;
}
Funcionario::Funcionario(const string & nm, const string & cpf, int mat, float sb, int ch, float ht) : PessoaFisica(nm, cpf){

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
float Funcionario::calculaSalarioBruto() const {
    return (salario_base * horas_trabalhadas) / carga_horaria + calculaBonus();
}


bool Funcionario::setMatricula(int matricula_) const{
    
}
bool Funcionario::setSalarioBase (float salario_base_)const;
bool Funcionario::setCargaHoraria(int carga_horaria_) const{
    if (ch > 0){
        carga_horaria = ch;
        return true;
    }
    else {
        false
    }

}
bool Funcionario::setHorasTrabalhadas(float horas_trabalhadas_) const{

    if (ht > 0 && <= carga_horaria){
        horas_trabalhadas = ht;
        return true
    }
    else {
        return false;
    }
}

float Funcionario::calculaBonus(){
    return 0;
}
