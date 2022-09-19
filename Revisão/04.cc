#include <iostream>
using namespace std;

#define MAX_SIZE 10
bool par(int x)
{
    if (x % 2 == 0 && x != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int vet[MAX_SIZE];
    int tam_vet = 0;
    cout << "Entre com o tamanho do vetor: ";
    cin >> tam_vet;

    for (int i = 0; i < tam_vet; i++)
    {
        cin >> vet[i];
    }
    for (auto x : vet)
    {
        if (par(x))
        {
            cout << "PARES SÃO: " << x << endl;
        }
    }
}
