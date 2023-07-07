#include "Fazenda.hpp"
#include "Animal.hpp"
#include "Porco.hpp"
#include "Galinha.hpp"
#include "Pato.hpp"
#include "Boi.hpp"
#include <vector>
#include <iostream>


int main(){

    Fazenda fazenda("Fazenda do Patoense", 300000, "Patos", "PB"); // cria a fazenda do patoense 
    cout << endl;

    Boi B1(20, "Macho", 400);
    Boi B2(10, "Femêa", 200);

    Porco P1(6, "Macho", 50); // cria um serie de animais para a fazenda
    Porco P2(4, "Macho", 30);

    Pato Pa1(7, "Macho", 2);
    Pato Pa2(6, "Femêa", 3);

    Galinha G1(6, "Femêa", 0.9);
    Galinha G2(4, "Femêa", 1);
    Galinha G3(5, "Femêa", 1.2);
    cout << "Criou os animais" << endl;

    fazenda.AddAnimal(&B1);
    fazenda.AddAnimal(&B2);
    fazenda.AddAnimal(&P1);
    fazenda.AddAnimal(&P2); // adiciona os animais no vector declarado na fazenda.hpp
    fazenda.AddAnimal(&Pa1);
    fazenda.AddAnimal(&Pa2);
    fazenda.AddAnimal(&G1);
    fazenda.AddAnimal(&G2);
    fazenda.AddAnimal(&G3);


    
    fazenda.imprimir(); // imprimi para mostrar as informações 
/*
    P1.som();
    P1.mover();
    P1.imprimir();
    P1.setPreco_Kg(50);
    P1.comer();
    P1.comer();
    P1.imprimir();
*/
    //cout << "Preço do kg da Porco: R$ " << P1.getPreco_Kg() << endl;

    //cout << "Preco total dos animais da fazenda: R$ " << fazenda.calculaPrecoTotal() << endl;

    //cout << "Preco do animal 3: R$ " << fazenda.calculaPrecoAnimal(3) << endl;

    // imprimi o valor total dos animais na fazenda e tbm de uma posição especifica

    fazenda.RemoveAnimal(4); // remove a posição 4

    fazenda.imprimir(); // apos remover imprimi de novo mostrando as alterações

    return 0;
}