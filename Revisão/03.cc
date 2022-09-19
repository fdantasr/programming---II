#include <iostream> //Biblioteca para comandos de entrada e saída
#define MAX_SIZE 10
using namespace std; // Biblioteca padrão para referenciar bibliotecas.

int main()
{
    int vetor[MAX_SIZE]; // Vetor com tamanho máximo
    int tamanho_vet;
    cout << "Entre com o tamanho do vetor: ";
    cin >> tamanho_vet;

    cout << "Adicione " << tamanho_vet << " valores no vetor de tamanho " << MAX_SIZE << " : ";

    for (int i = 0; i < tamanho_vet; i++)
    {
        cin >> vetor[i];
    }

    cout << "\nOs elementos pares no Vetor são : " << endl;

    for (int i = 0; i < tamanho_vet; i++)
    {
        if (vetor[i] % 2 == 0 && vetor[i] != 0)
        {
            cout << vetor[i] << endl;
        }
    }
    return 0;
}