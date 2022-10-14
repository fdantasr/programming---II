#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <memory>

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

// IPLEMENTAÇÃO DA CLASSE FATURA
class Fatura
{
private:
    vector<ItemFatura> *pv; // Uso da classe Vector para declarar vetores | Armazena dados do tipo "Item fatura"

public:
    Fatura() { pv = new vector<ItemFatura>; }
    ~Fatura() { delete pv; } //Destrutor

    // Método para adicionar itens no pointer
    void addItem(ItemFatura it) { pv->push_back(it); }
    void totalFatura();
};

void Fatura::totalFatura()
{
    cout << "Itens alocados: " << endl;
    float totalSum = 0.0;
    for (auto c : *pv)
    {
        c.imprime();
        totalSum += c.totalItem(); // or you can do totalSum = totalSum + c.totalItem();
    }
    cout << "SUA FATURA TOTAL É DE: " << totalSum << endl;
    cout << "------------------------------ " << endl;
    cout << "NUBANK PAGAMENTOS" << endl
         << endl;
}

// Desenvolvendo os métodos

float ItemFatura::totalItem()
{
    // retorna o valor total do produto em função de seu preço e quantidade
    return precoUnit * qtd;
}
void ItemFatura::imprime()
{
    cout << "ID: " << id << endl;
    cout << "NOME: " << nome << endl;
    cout << "QUANTIDADE: " << qtd << endl;
    cout << "PREÇO POR UNIDADE: " << precoUnit << endl
         << endl;
}

// Função Principal

int main()
{
    // Declaração de objetos da classe ItemFatura
    ItemFatura i1 = ItemFatura();
    ItemFatura i2(12, "Sorvete", 13, 12.9);
    ItemFatura i3(14, "Chocolate", 39, 23.3);

    Fatura fatura;
    fatura.addItem(i1);
    fatura.addItem(i2);
    fatura.addItem(i3);

    fatura.totalFatura();
}