#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;

class Pessoa // Classe pai
{
private:
    string nome;
    string cpf;

public:
    Pessoa(string _nome, string _cpf) : nome(_nome), cpf(_cpf){};

    virtual string getNome() { return nome; }
    virtual string getCpf() { return cpf; }

    virtual void setNome(string _nome) { nome = _nome; }
    virtual void setCpf(string _cpf) { cpf = _cpf; }

    virtual void print()
    {
        cout << "--------------"
             << "\n\n";
        cout << "Nome: " << nome << "\nCPF: " << cpf << "\n\n";
        cout << "--------------"
             << "\n\n";
    }
};

class Professor : public Pessoa // Classe secundária/filha
{
private:
    int S;

public:
    Professor(string nome, string cpf, int s) : Pessoa(nome, cpf), S(s) {}

    string getNome() override { return Pessoa::getNome(); }
    void setNome(string Nome) override { Pessoa::getNome() = Nome; }
    string getCpf() override { return Pessoa::getCpf(); }
    void setCpf(string Cpf) override { Pessoa::getCpf() = Cpf; }
    int getS() { return S; }
    void setS(int s) { S = s; }
    void print() override
    {
        cout << "--------------"
             << "\n\n";
        cout << "Nome: " << Pessoa::getNome() << "\nCPF: " << Pessoa::getCpf() << "\nCategoria: Professor\n"
             << "SIAPE: " << S << "\n\n";
        cout << "--------------"
             << "\n\n";
    }
};

class Aluno : public Pessoa
{
private:
    int RGA;

public:
    Aluno(string nome, string cpf, int R) : Pessoa(nome, cpf), RGA(R) {}

    string getNome() override { return Pessoa::getNome(); }
    void setNome(string Nome) override { Pessoa::getNome() = Nome; }
    string getCpf() override { return Pessoa::getCpf(); }
    void setCpf(string Cpf) override { Pessoa::getCpf() = Cpf; }
    int getRga() { return RGA; }
    void setRga(int R) { RGA = R; }

    void print() override
    {
        cout << "--------------"
             << "\n\n";
        cout << "Nome: " << Pessoa::getNome() << "\nCPF: " << Pessoa::getCpf() << "\nCategoria: Estudante\n"
             << "RGA: " << RGA << "\n\n";
        cout << "--------------"
             << "\n\n";
    }
};

int main()
{
    Pessoa pe("João", "123.456.789-00");
    Professor pf1("José", "012.234.567-89", 2744102);
    Aluno al1("Maria", "234.567.890-12", 2020122);
    Professor pf2("Antônio", "345.567.789-10", 1740120);
    Aluno al2("Jorge", "456.789.012-34", 2721132);
    // 30% da nota até aqui
    vector<Pessoa *> pp;
    pp.push_back(&pe);
    pp.push_back(&pf1);
    pp.push_back(&al1);
    pp.push_back(&pf2);
    pp.push_back(&al2);
    //+ 30% da nota até aqui
    for (auto p : pp)
    {
        p->print();
    }
    //+ 30% da nota até aqui
}