#include <iostream>
#include <memory>
#include <vector>

using namespace std;
/* Onde estão as bibliottecas que iremos trabalhar,
 como se fosse uma organização de pastas PADRÃO.*/

vector<int> *create() // Vetor
{
    vector<int> *a = new vector<int>{};
    return a;
}

void insert(vector<int> *a, int valor)
{
    a->push_back(valor);
}

void imprime(vector<int> *a)
{
    for (auto c : *a)
        cout << c << endl;
}
int main() // Função Principal
{
    auto x = create();
    insert(x, 23);
    imprime(x);
    delete x;
}
