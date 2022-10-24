#include <iostream>

using namespace std;

class Triangulo //Minha classe Triangulo
{
    // Definição de atributos
public:
  // atributos com seus respectivos tipos
    float base;
    float altura;
  // Comportamento / Método
    float calculaArea()
    {
        return (base * altura) / 2;
    }
};
// Cada instancia de uma classe possui seus proprios valores aos atributos.
int main()
{
    Triangulo t1, t2; //Istancia/objeto da classe triangulo

    t1.base = 2.0; //Atribuição aos atributos da classe triangulo por meio da instancia
    t1.altura = 2.5;

    t2.base = 3.0;
    t2.altura = 2.5;

    auto x = t1.calculaArea(); //Instancia t1 invocando o método calculaArea
    auto y = t2.calculaArea(); 

    cout << "Area do triangulo 1: " << x << endl;
    cout << "Area do triangulo 2: " << y << endl;

    return 0;
}