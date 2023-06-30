#include "Fazenda.hpp"
#include "Animal.hpp"
#include "Porco.hpp"
#include "Galinha.hpp"
#include "Pato.hpp"
#include "Boi.hpp"
#include <vector>
#include <iostream>


int main(){

    Fazenda fazenda("Fazenda do Patoense", 300000, "Patos", "PB");
    cout << endl;

    Boi B1(20, "Masculina", 400, 16);
    Boi B2(10, "Femenina", 200, 16);

    Porco P1(6, "Masculino", 50, 10);
    Porco P2(4, "Masculino", 30, 10);

    Pato Pa1(7, "Masculino", 2, 44);
    Pato Pa2(6, "Femenina", 3, 44);

    Galinha G1(6, "Femenina", 0.9, 30);
    Galinha G2(4, "Femenina", 1, 30);
    Galinha G3(5, "Femenina", 1.2, 30);
    cout << "Criou os animais" << endl;
/*
    B1.imprimir();
    B1.mover();
    cout << "Se moveu" << endl;
    B1.imprimir();
    cout << "Comeu" << endl;
    B1.comer();
    B1.imprimir();
    B1.som();
*/
    //P1.imprimir();
    //Pa1.imprimir();
    //G1.imprimir();

/*
    vector <Animal *> animais(9);
    animais[0] = &B1;
    animais[1] = &P1;
    animais[2] = &Pa1;
    animais[3] = &G1;
    animais[4] = &G2;
    animais[5] = &B2;
    animais[6] = &P2;
    animais[7] = &Pa2;
    animais[8] = &G3;
*/
/*
    fazenda.AddAnimal(&B1);
    fazenda.AddAnimal(&B2);
    fazenda.AddAnimal(&P1);
    fazenda.AddAnimal(&P2);
    fazenda.AddAnimal(&Pa1);
    fazenda.AddAnimal(&Pa2);
    fazenda.AddAnimal(&G1);
    fazenda.AddAnimal(&G2);
    fazenda.AddAnimal(&G3);
    
*/
    fazenda.imprimir();
    return 0;
}