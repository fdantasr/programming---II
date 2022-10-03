#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
using std::string; // usa a classe std::string

class Pessoa
{        // Definindo um objetivo através de uma classe
private: // Meus atributos podem ser acessados de fora do objeto
    int id;
    string nome;
    int idade; // Atributos da classe pessoa
public:
    void mostraNome()
    {
        cout << nome;
    }
};

int main()
{
    Pessoa amigo;
    //amigo.nome = "Dantas";
    amigo.mostraNome();

    return 0;
}