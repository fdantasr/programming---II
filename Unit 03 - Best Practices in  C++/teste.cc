#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
using std::string;

class Compra
{
private:
    // Atributos privados - Encapsulamento/Implementação
    double valor = 0;
    string local = "---";
    int qtdParcelas;

    float dataCompra = 10;
    int segundoData = 10;
    int terceiroData = 2010;

    float horaCompra = 10;
    int minutoCompra = 10;

public: // Métodos são sempre públicos, pois irão ser invocados e manipularão os atributos
    // Construtor default - 01 que não possui retorno
    Compra() = default;

    // Construtor 02 com SET E GET - Inicializa os atributos com todos os valores passados por parâmetro;
    Compra(double _valor, string _local, int _qtdParcelas, float _dataCompra, int _segundoData, int _terceiroData, float _horaCompra, int _minutoCompra) : valor(_valor), local(_local), qtdParcelas(_qtdParcelas), dataCompra(_dataCompra), segundoData(_segundoData), terceiroData(_terceiroData), horaCompra(_horaCompra), minutoCompra(_minutoCompra){};

    // Métodos seletores (GET)

    float getvalor() { return valor; }
    string getlocal() { return local; }
    int getQtdParcelas() { return qtdParcelas; }

    float getDataCompra() { return dataCompra; }
    int getSegundoData() { return segundoData; }
    int getTerceiroData() { return terceiroData; }

    float getHoraCompra() { return horaCompra; }
    int getMinutoCompra() { return minutoCompra; }

    // Métodos modificadores - Modifico meus atributos através do método (SET)

    void setlocal(string _local) { local = _local; }
    void setvalor(double _valor) { valor = _valor; }
    void setQtdParcelas(int _qtdParcelas) { qtdParcelas = _qtdParcelas; }

    void setDataCompra(float _dataCompra, int _segundoData, int _terceiroData) { dataCompra = _dataCompra, segundoData = _segundoData, terceiroData = _terceiroData; }

    void setHoraCompra(float _horaCompra, int _minutoCompra) { horaCompra = _horaCompra, minutoCompra = _minutoCompra; }

    // PROTÓTIPOS DOS MÉTODOS
    float totalFatura();
    void imprime();
};
void Compra::imprime()
{
    float divide = valor / getQtdParcelas();

    cout << "Compra realizada" << endl;
    cout << "Data-Hora: " << getDataCompra() << "/" << getSegundoData() << "/" << getTerceiroData() << "-" << getHoraCompra() << ":" << getMinutoCompra() << endl;
    cout << "Local: " << getlocal() << endl;
    if (getQtdParcelas() > 2)
    {
        cout << getQtdParcelas() << "x "
             << " R$ " << divide << endl;
    }
    else
    {
        cout << "Valor: R$" << getvalor() << endl;
    }
    cout << "---------------------------------" << endl;
}

class FaturaCartao : public Compra
{
private:
    vector<Compra> carrinho;

public:
    void add(Compra c)
    {
        carrinho.push_back(c); // atribui ao vetor com a função push
    }
    void fechaFatura()
    {
        cout << "|| Fatura Fechada ||" << endl;
        double total;
        for (auto f : carrinho)
        { // Atribui em f os itens do carrinho/vetor
            cout << f.getDataCompra() << "/" << f.getSegundoData() << "/" << f.getTerceiroData() << "|R$ " << (f.getvalor() / f.getQtdParcelas()) << "|" << f.getlocal() << endl;

            total += (f.getvalor() / f.getQtdParcelas());
        }
        cout << "Total Fatura: R$ " << total << endl;
    }
};

int main()
{
    Compra c1 = Compra(); // Tudo atribuido a 0 por padrão
    Compra c2(100, "Restaurante", 1, 22, 10, 2022, 12, 57);
    // Valor, Local,  parcelas,    data,   hora

    c1.imprime();
    c2.imprime();

    // 20% da nota até aqui

    c1.setlocal("Oficina");
    c1.setvalor(600.0);
    c1.setQtdParcelas(3);
    c1.setDataCompra(23, 10, 2022);
    c1.setHoraCompra(15, 45);
    c1.imprime();

    //+ 40% da nota até aqui

    FaturaCartao f;
    f.add(c1);
    f.add(c2);
    Compra c3(700, "Loja", 2, 24, 10, 2022, 11, 32);
    f.add(c3);
    f.fechaFatura();

    //+ 40% da nota até aqui
}