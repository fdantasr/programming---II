#ifndef proto_h
#define proto_h
#include <iostream>


namespace Trabalho
{

    //-----Transporte - CLASSE PURAMENTE VIRTUAL-----
    class Transporte
    {
    private:
        std::string Nome;
        int numPassageiros;
        int velocidadeAtual;

    public:
        // construtor
        Transporte();
        Transporte(std::string nome, int numpassageiros, int velocidadeatual);
        // modificador
        void setNome(std::string);
        void setNumPassageiros(int);
        void setVelocidadAtual(int);
        // seletores
        std::string getNome();
        int getNumPassageiros();
        int getVelocidadAtual();
        // Método
        virtual bool estaParado() = 0;
        // Função
        friend void operator>(Transporte &obj1, Transporte &obj2);
    };

    //-----Terrestre - CLASSE PURAMENTE VIRTUAL-----
    class Terrestre : public Transporte
    {
    public:
        // construtor
        Terrestre();
        Terrestre(std::string nome, int numpassageiros, int velocidadeatual);
        // Método/
        virtual void frear() = 0;
        bool estaParado() override;
    };

    //-----Carro-----
    class Carro : public Terrestre
    {
    public:
        // construtor
        Carro();
        Carro(std::string nome, int numpassageiros, int velocidadeatual);
        // Método
        void frear() override;
    };

    //-----Aereo - CLASSE PURAMENTE VIRTUAL-----
    class Aereo : public Transporte
    {
    private:
        int Altura;

    public:
        // construtor
        Aereo();
        Aereo(std::string nome, int numpassageiros, int velocidadeatual, int altura);
        // Modificador
        void setAltura(int);
        // Seletor
        int getAltura();
        // Métodos
        virtual void subir(int) = 0;
        virtual void descer(int) = 0;
        bool estaParado() override;
    };

    //-----Aviaum-----
    class Aviaum : public Aereo
    {
    public:
        // Construtor
        Aviaum();
        Aviaum(std::string nome, int numpassageiros, int velocidadeatual, int altura);
        // Método
        void subir(int) override;
        void descer(int) override;
    };
    //-----Balaum-----
    class Balaum : public Aereo
    {
    public:
        // Construtor
        Balaum();
        Balaum(std::string nome, int numpassageiros, int velocidadeatual, int altura);
        // Método
        void subir(int) override;
        void descer(int) override;
    };

}

#endif