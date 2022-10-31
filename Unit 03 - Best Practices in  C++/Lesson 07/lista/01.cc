#include <iostream>
#include <stdio.h>
#include <string>
#include <memory>

using namespace std;
using std::string; // usa a classe std::string

class Data
{
private:
    int dia, mes, ano;

public:
    // Construtor 01
    Data() = default;
    // Construtor 02
    Data(int _dia, int _mes, int _ano) : dia(_dia), mes(_mes), ano(_ano) {}

    // Métodos seletores
    int getDia() { return dia; }
    int getMes() { return mes; }
    int getAno() { return ano; }

    // Protótipo das funções
    int ultimoDiaMes(int mes)
    {
        if (mes == 2) // 28 (fevereiro)
        {
            if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
            {
                return 28; // Se não for bissexto é 28
            }
            else
            {
                return 29; // Se for bissexto é 29
            }
        } // Primeira verificação

        else if (mes == 4 || mes == 6 || mes == 9 || mes == 10)
        {
            return 30;
        }
        else
        {
            return 31;
        }
    };

    string imprime()
    { // Formato DD/MM/AAAA
        /*Para usar void usa esse cout
        << getDia() << "/" << mes << "/" << ano << endl;*/

        // Forma 1 de passar os atributos para string
        cout << to_string(dia) << "/" << to_string(mes) << "/" << to_string(ano) << endl;
        // Forma 2 de passar os atributos para string
        return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
    };

    // Protótipo da função frind
    friend bool operator==(const Data &instancia1, const Data &instancia2);
};

// Desenvolvimento da função friend
bool operator==(const Data &instancia1, const Data &instancia2)
{
    return instancia1.dia == instancia2.dia && instancia1.mes == instancia2.mes && instancia1.ano == instancia2.ano;
}

int main()
{
    Data d1 = Data();     // Istância de Data
    Data d2(29, 8, 2002); // Passando os Parâmetros

    d1.imprime(); // Chamando função imprime
    d2.imprime();

    cout << d2.imprime();

    if ((d1 == d2) == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}