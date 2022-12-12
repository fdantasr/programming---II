#include <iostream>
#include "proto.h"
//using namespace Trabalho

int main (){
    
    Trabalho::Transporte t1("carro",14,2);
    
    std::cout << t1.estaParado() << std::endl;

    Trabalho::Terrestre t2("bicicleta",10, 0);

    //t2.frear();

    Trabalho::Carro t3("Carro",20,2002);
    //t3.frear();

    Trabalho::Aereo t4("Zeppelin",1000, 700,7);
    
    //t4.subir(600);
    //t4.descer(606);
    //t4.descer(1);
    //t4.descer(666);

    Trabalho::Aviaum t5("Aviao",300,1225,1000);
    t5.subir(700);
    t5.descer(706);
    t5.descer(1);
    t5.descer(766);
    t5.subir(9999);

    Trabalho::Balaum t6("Balao",200,12251,300);
    t6.subir(500);
    t6.descer(706);
    t6.descer(1000);
    t6.subir(800);

    t5>t6;


    return 0;
}