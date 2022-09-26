// Write a program that reads an integer array of size 10 and prints only the pairs.

#include <iostream>
#define MAX_SIZE 10
using namespace std;

int main()
{
    int vet[MAX_SIZE];
    int tamanho_vet;
    cout << "Entre com o tamanho do vetor: ";
    cin >> tamanho_vet;

    cout << "Entre com " << tamanho_vet << " elementos no Vetor :";

    for (int i = 0; i < tamanho_vet; i++) // Receber os valores digitados e percorrer os índices
    {
        cin >> vet[i];
    }

    cout << "\nOs elementos pares no Vetor são : " << endl;
    for (int i = 0; i < tamanho_vet; i++)
    {
        if (vet[i] % 2 == 0 && vet[i] != 0)
        {
            cout << vet[i] << endl;
        }
    }
    return 0;
}
