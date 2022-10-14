#include <iostream>
#include <string>

using namespace std;

class Empregado
{
public:
    string nome;
    float salario1;
    float salariot;

    void aumento(float porcentagem)
    {
        salariot = salario1 + (salario1 * porcentagem / 100);
    }

    void mostraDados()
    {
        cout << "Nome: " << nome << endl;
        cout << "Salario anterior: " << salario1 << endl;
        cout << "Salario atual: " << salariot << endl;
    }
};

int main()
{
    Empregado e;
    float porc;

    cout << "Informe o nome:" << endl;
    getline(cin, e.nome);

    cout << "Informe o salario: " << endl;
    cin >> e.salario1;

    cout << "Informe um valor para calcular a porcentagem e o aumento do operario: " << endl;
    cin >> porc;

    e.aumento(porc);
    e.mostraDados();

    return 0;
}