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

    // Métodos modificadores
    void setDia(int _dia) { dia = _dia; };
    void setMes(int _mes) { mes = _mes; };
    void setAno(int _ano) { ano = _ano; };

    int ultimoDiaMes()
    {
        if (mes == 2) // 28 (fevereiro)
        {
            if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))) // Verifica se é ano Bissexto
            {
                return 29;
            }
            else
            {
                return 28;
            }
        } // Primeira verificação

        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            return 30;
        }
        else
        {
            return 31;
        }
    };

    string imprime()
    {
        // cout << to_string(dia) << "/" << to_string(mes) << "/" << to_string(ano) << endl;
        return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
    };

    // Protótipos das funções frind
    friend bool operator==(const Data &instancia1, const Data &instancia2);
    friend void operator++(Data &date);
    friend void operator+(Data &date, int n);
    friend void operator+=(Data &date, int n);
};

// Desenvolvimento da função friend
bool operator==(Data &instancia1, Data &instancia2)
{

    if ((instancia1.getMes() == instancia2.getMes() && instancia1.getDia() == instancia2.getDia() && instancia1.getAno() == instancia2.getAno()) == true)
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
    return instancia1.getDia() == instancia2.getDia() && instancia1.getMes() == instancia2.getMes() && instancia1.getAno() == instancia2.getAno();
}

void operator++(Data &date)
{
    if (date.getDia() == date.ultimoDiaMes())
    {
        date.setDia(1);

        if (date.getMes() + 1 > 12)
        {
            date.setMes(1);
            date.setAno(date.getAno() + 1);
        }
        else
        {
            date.setMes(date.getMes() + 1);
        }
    }
    else
    {
        date.setDia(date.getDia() + 1);
    }
}
void operator+(Data &date, int n)
{

    date.setDia(date.getDia() + n);
    while (date.getDia() > date.ultimoDiaMes())
    {
        date.setDia(date.getDia() - date.ultimoDiaMes());
        if (date.getMes() >= 12)
        {
            date.setMes(1);
            date.setAno(date.getAno() + 1);
        }
        else
        {
            date.setMes(date.getMes() + 1);
        }
    }
}

void operator+=(Data &date, int n)
{
    operator+(date, n);
}

int main()
{
    Data date1 = Data(); // Istâncias de Data com os parâmetros
    Data date2(31, 12, 2002);

    cout << "Data 1: " << date1.imprime() << endl;
    cout << "Data 2: " << date2.imprime() << endl;

    // Sobrecarga com operdador ==
    date1 == date2;
   
    // Sobrecarga operador ++
    ++date2;
    cout << date2.imprime() << endl;

    // Sobrecarga operador +
    date2 + 365;
    cout << date2.imprime() << endl;

    // Sobrecarga operador +=
    for (int i = 0; i < 10; i++)
    {
        date2 += 1;
    }
    cout << date2.imprime() << endl;

    return 0;
}