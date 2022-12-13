#include "proto.h"

namespace Trabalho
{
    //---------------Transporte---------------

    // Construtor
    Transporte::Transporte() = default;
    Transporte::Transporte(std::string nome, int numpassageiros, int velocidadeatual)
    {
        Nome = nome;
        numPassageiros = numpassageiros;
        velocidadeAtual = velocidadeatual;
    };
    // Modificador
    void Transporte::setNome(std::string nome) { Nome = nome; }
    void Transporte::setNumPassageiros(int numpassageiros) { numPassageiros = numpassageiros; }
    void Transporte::setVelocidadAtual(int velocidadeatual) { velocidadeAtual = velocidadeatual; }
    // Seletores
    std::string Transporte::getNome() { return Nome; }
    int Transporte::getNumPassageiros() { return numPassageiros; }
    int Transporte::getVelocidadAtual() { return velocidadeAtual; }

    //---------------Operador---------------
    void operator>(Transporte &obj1, Transporte &obj2)
    {
        if (obj1.getNumPassageiros() > obj2.getNumPassageiros())
        {
            std::cout << "O obejto: " << obj1.getNome() << " tem o maior numero de passageiros!" << std::endl;
        }
        else if (obj2.getNumPassageiros() > obj1.getNumPassageiros())
        {
            std::cout << "O obejto: " << obj2.getNome() << " tem o maior numero de passageiros!" << std::endl;
        }
        else
        {
            std::cout << "O numero de passageiros do obj1: " << obj1.getNome() << " eh igual ao do obj2: " << obj2.getNome() << std::endl;
        }
    }

    //---------------Terrestre---------------

    // Construtor
    Terrestre::Terrestre() = default;
    Terrestre::Terrestre(std::string nome, int numpassageiros, int velocidadeatual) : Transporte(nome, numpassageiros, velocidadeatual) {}
    // Método estaParado
    bool Terrestre::estaParado()
    {
        if (getVelocidadAtual() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    

    //-----Carro-----

    // Construtor
    Carro::Carro() = default;
    Carro::Carro(std::string nome, int numpassageiros, int velocidadeatual) : Terrestre(nome, numpassageiros, velocidadeatual) {}
    // Método
    void Carro::frear()
    {
        if (getVelocidadAtual() == 0)
        {
            std::cout << "Nao é possivel frear mais que isso (ja estah parado)!" << std::endl;
        }
        else
        {
            int aux = getVelocidadAtual() * 0.25;
            setVelocidadAtual(getVelocidadAtual() - aux);
            std::cout << "Velocidade atual: " << getVelocidadAtual() << std::endl;
        }
    }

    //-----Aereo-----

    // Construtor
    Aereo::Aereo() = default;
    Aereo::Aereo(std::string nome, int numpassageiros, int velocidadeatual, int altura) : Transporte(nome, numpassageiros, velocidadeatual) { Altura = altura; }
    // Modificador
    void Aereo::setAltura(int altura) { Altura = altura; }
    // Seletor
    int Aereo::getAltura() { return Altura; }
    
// Método estaParado
    bool Aereo::estaParado()
    {
        if (getVelocidadAtual() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //-----Aviaum-----

    // Construtor
    Aviaum::Aviaum() = default;
    Aviaum::Aviaum(std::string nome, int numpassageiros, int velocidadeatual, int altura) : Aereo(nome, numpassageiros, velocidadeatual, altura) {}
    // Métodos
    void Aviaum::subir(int metros)
    {
        if (metros + getAltura() > 10000)
        {
            std::cout << "Aviao estah muito alto [Acima dos 10.000]!" << std::endl;
        }
        else
        {
            setAltura(getAltura() + metros);
            std::cout << "Altura atual: " << getAltura() << std::endl;
        }
    }
    void Aviaum::descer(int metros)
    {
        if (getAltura() == 0)
        {
            std::cout << "Muito próximo do chao/bateu!!!";
        }
         else if (getAltura() - metros < 0)
        {
           std::cout << "Limite do chao abaixo de 0 [ERRO]" << std::endl;
        }
        
        else
        {
            setAltura(getAltura() - metros);
            std::cout << "Altura atual: " << getAltura() << std::endl;
        }
    }

    //-----Balaum-----

    // Construtor
    Balaum::Balaum() = default;
    Balaum::Balaum(std::string nome, int numpassageiros, int velocidadeatual, int altura) : Aereo(nome, numpassageiros, velocidadeatual, altura) {}
    // Métodos
    void Balaum::subir(int metros)
    {
        if (metros + getAltura() > 1000)
        {
            std::cout << "Balao muito alto! [Acima dos 1.000]" << std::endl;
        }
        else
        {
            setAltura(getAltura() + metros);
            std::cout << "Altura atual: " << getAltura() << std::endl;
        }
    }
    void Balaum::descer(int metros)
    {
        if (getAltura() - metros == 0 || getAltura() - metros < 0)
        {
            std::cout << "Balao muito baixo!" << std::endl;
        }
        else
        {
            setAltura(getAltura() - metros);
            std::cout << "Altura atual: " << getAltura() << std::endl;
        }
    }

}