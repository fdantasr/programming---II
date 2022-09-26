#include <iostream>

using namespace std;

class Lampada
{
    // Definição de atributos
public:
    bool ligada;
    int tipo; // incandescente = 1, led = 2 ou fluorescente = 3;
    int watt;
    int cor; // amarela = 1, branca = 2, outros = 3;
    string marca;
    int potencia;

    // Verificação se lampada ta ligada ou desligada
    void ligar()
    {
        ligada = true;
    }

    void desligar()
    {
        ligada = false;
    }

    void status()
    {
        if (ligada)
        {
            cout << "A lampada " << marca << " esta ligada" << endl;
        }
        else
        {
            cout << "A lampada " << marca << " esta desligada" << endl;
        }
    }

    bool ehEconomica()
    {
        if (potencia < 40)
        {
            return true;
        }
        else if (potencia > 40)
        {
            return false;
        }
        else
        {
            cout << "Nao estah dentro das especificacoes." << endl;
        }
    }
};

int main()
{
    Lampada l1, l2;

    l1.marca = "osram";
    l2.marca = "fiat lux";

    l1.ligar();
    l2.desligar();

    l1.status();
    l2.status();

    l2.ligar();
    l2.status();

    cout << "Informe a potencia da lampada: " << endl;
    cin >> l1.potencia;

    if (l1.ehEconomica() == true)
    {
        cout << "Potencia abaixo de 40" << endl;
    }
    else
    {
        cout << "Potencia acima de 40" << endl;
    }

    return 0;
}