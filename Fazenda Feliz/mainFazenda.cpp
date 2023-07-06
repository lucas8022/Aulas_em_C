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

    Boi B1(20, "Masculina", 400);
    Boi B2(10, "Femenina", 200);

    Porco P1(6, "Masculino", 50); // cria um serie de animais para a fazenda
    Porco P2(4, "Masculino", 30);

    Pato Pa1(7, "Masculino", 2);
    Pato Pa2(6, "Femenina", 3);

    Galinha G1(6, "Femenina", 0.9);
    Galinha G2(4, "Femenina", 1);
    Galinha G3(5, "Femenina", 1.2);
    cout << "Criou os animais" << endl;
/*
    B1.imprimir();
    B1.mover();
    cout << "Se moveu" << endl; // aqui testei as funções mover, som e comer de boi 
    B1.imprimir();
    cout << "Comeu" << endl;
    B1.comer();
    B1.imprimir();
    B1.som();
*/

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

    //cout << "Preco total dos animais da fazenda: " << fazenda.calculaPrecoTotal() << endl;

    //cout << "Preco do animal 3: " << fazenda.calculaPrecoAnimal(3) << endl;

    // imprimi o valor total dos animais na fazenda e tbm de uma posição especifica
/*
    fazenda.RemoveAnimal(4); // remove a posição 4

    cout << "Retirou animal posicao 4" << endl;

    fazenda.imprimir(); // apos remover imprimi de novo mostrando as alterações
*/
    return 0;
}