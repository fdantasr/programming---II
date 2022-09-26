#include <iostream>

using namespace std;

class triangulo
{
    // Definição de atributos
public:
    float base;
    float altura;

    float calculaArea()
    {
        return (base * altura) / 2;
    }
};

int main()
{
    triangulo t1;

    t1.base = 2.0;
    t1.altura = 2.5;

    auto x = t1.calculaArea();
    cout << "Area do triangulo: " << x << endl;

    return 0;
}