#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <memory>


using namespace std;
using std::string; // usa a classe std::string

class VeiculoAVenda
{
    // Atributos privados - Encapsulamento
private:
    string marca;
    string modelo;
    int ano;
    float precoDeVenda;

public:
    // Construtor default - 01
    VeiculoAVenda() = default;
    VeiculoAVenda(string _marca, string, string _modelo, int _ano, float _precoDeVenda) : marca(_marca), modelo(_modelo), ano(_ano), precoDeVenda(_precoDeVenda){};

    // Construtor 02 com SET E GET - Inicializa os atributos com todos os valores passados por parâmetro;

    // Métodos seletores (GET)

    string getMarca() { return marca; }
    string getModelo() { return modelo; }
    int getAno() { return ano; }
    float getPrecoDeVenda() { return precoDeVenda; }

    // Métodos modificadores (SET)

    void setMarca(string _marca) { marca = _marca; }
    void setModelo(string _modelo) { modelo = _modelo; }
    void setAno(int _ano) { ano = _ano; }
    void setPrecoDeVenda(float _precoDeVenda) { precoDeVenda = _precoDeVenda; }

    virtual void imprime()
    {
        cout << "\nDados do veiculo[1 Memory position]:\nMarca: " << getMarca() << "\nModelo: " << getModelo() << "\nAno: " << getAno() << "\nPrecoDeVenda: R$" << getPrecoDeVenda() << endl;
    }
};

int main(){



};