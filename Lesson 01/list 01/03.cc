// Write a program that reads an integer array of size 10 and prints only the pairs.

#include <iostream>
#define MAX_SIZE 10
using namespace std;

int main()
{
    int vet[MAX_SIZE];
    int num;
    cout << "Entre com o tamanho do vetor: ";
    cin >> num;

    cout << "Entre com " << num << " elementos no Vetor :";

    for (int i = 0; i < num; i++)
    {
        cin >> vet[i];
    }

    cout << "\nOs elementos pares no Vetor são : " << endl;
    for (int i = 0; i < num; i++)
    {
        if (vet[i] % 2 == 0 && vet[i] != 0)
        {
            cout << vet[i] << endl;
        }
    }

    return 0;
}