#include <iostream>
#include "proto.h"
//using namespace

int main (){
    
Trabalho::Carro t1("Gol Bola",14,32);
Trabalho::Aviaum t2("Boeing",314,14, 200);
Trabalho::Balaum t3("Balao do Dantas",14,4, 300);
    
std::cout << "TESTANDO O OBJETO CARRO" << std::endl;
std::cout << "" << std::endl;
std::cout << "Nome do Carro: "<< t1.getNome() << std::endl;
std::cout << "Velocidade Inicial: "<< t1.getVelocidadAtual()<< std::endl;
t1.frear();;
std::cout << "Numero de Passageiros: " << t1.getNumPassageiros()<< std::endl;
std::cout << "" << std::endl;

std::cout << "======================================" << std::endl;
std::cout << "TESTANDO O OBJETO AVIAO" << std::endl;
std::cout << "" << std::endl;
std::cout << "Nome do Aviao: "<< t2.getNome() << std::endl;
std::cout << "Velocidade Inicial: "<< t2.getVelocidadAtual()<< std::endl;
t2.subir(40);
t2.descer(314);
std::cout << "======================================" << std::endl;
std::cout << "" << std::endl;

 std::cout << "TESTANDO O OBJETO BALAO" << std::endl;
 std::cout << "" << std::endl;
 std::cout << "Nome do Balao: "<< t3.getNome() << std::endl;
 std::cout << "Velocidade Inicial: "<< t3.getVelocidadAtual()<< std::endl;
t3.subir(20);
t3.descer(40);
std::cout << "======================================" << std::endl;

std::cout << "TESTE DA FUNCAO AMIGA" << std::endl;
t2 > t3;

    return 0;
}