#include <iostream>
#include <string>

using namespace std;

class Lampada
{
public:
    // Atrinutos
    bool ligada;
    string tipo;
    int voltagem;
    int potencia;

    // Métodos

    void ligar() { ligada = true; }
    void desligar() { ligada = false; }
    void status()
    {
        if (ligada)
            cout << "A lâmpada " << tipo << " está ligada\n";
        else
            cout << "A lâmpada " << tipo << " está desligada\n";
    }
};

int main()
{
    Lampada lamp1, lamp2; // Instancio lamp1 e lamp2 de Lampada;

    lamp1.tipo = "Lampada 1";
    lamp2.tipo = "Lampada 2";

//Instancio invocando os métodos
    lamp1.ligar(); //Ref 1
    lamp2.desligar(); //Ref 2

//invoca os métodos para verificar
    lamp1.status(); //Ref 1
    lamp2.status(); //Ref 2

    lamp2.ligar();
    lamp2.status();
}
