#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
using std::string; // usa a classe std::string

class ItemFatura
{
private:
    // Atributos privados - Encapsulamento
    int id;
    string nome;
    int qtd;
    float precoUnit;

public:
    // Construtor default - 01
    ItemFatura() = default;
    ItemFatura(int _id, string _nome, int _qtd, float _precoUnit) : id(_id), nome(_nome), qtd(_qtd), precoUnit(_precoUnit){};

    // Construtor 02 com SET E GET - Inicializa os atributos com todos os valores passados por parâmetro;
    // Métodos modificadores (SET)

    void setId(int _id) { id = _id; }
    void setNome(string _nome) { nome = _nome; }
    void setQtd(int _qtd) { qtd = _qtd; }
    void setPrecoUnit(float _precoUnit) { precoUnit = _precoUnit; }

    // Métodos seletores (GET)

    float getId() { return id; }
    string getNome() { return nome; }
    int getQtd() { return qtd; }
    int getPrecoUnit() { return precoUnit; }

    // PROTÓTIPOS DOS MÉTODOS
    float totalItem();
    void imprime();
};

// Desenvolvendo os métodos

float ItemFatura::totalItem()
{
    // retorna o valor total do produto em fun¸c˜ao de seu pre¸co e quantidade
    return precoUnit * qtd;
}
void ItemFatura::imprime()
{
    cout << "ID: " << id << endl;
    cout << "NOME: " << nome << endl;
    cout << "QUANTIDADE: " << qtd << endl;
    cout << "PREÇO POR UNIDADE: " << precoUnit << endl;
}

// Função Principal

int main()
{
    ItemFatura produto1 = ItemFatura(); // Para retornar sem ponteiro
    ItemFatura produto2(20, "Dantas", 3, 100);

    cout << "PRODUTO 1" << endl;
    cout << "SUA FATURA ANTES: " << endl;
    cout << " " << endl;
    produto1.imprime();
    produto1.setId(10101010);
    produto1.setNome("Felipe");
    produto1.setPrecoUnit(7);
    produto1.setQtd(10);
    cout << " " << endl;
    cout << "SUA FATURA DEPOIS: " << endl;
    produto1.imprime();
    cout << "O total eh: " << produto1.totalItem() << endl;
    cout << "------------------------------" << endl;

    cout << "PRODUTO 2" << endl;
     cout << "SUA FATURA ANTES: " << endl;
     cout << " " << endl;
    produto2.imprime();
    cout << "O total era: " << produto2.totalItem() << endl;
    produto2.setPrecoUnit(5);
    cout << " " << endl;
    cout << "SUA FATURA DEPOIS: " << endl;
    produto2.imprime();
    cout << "O total eh: " << produto2.totalItem() << endl;
    
}