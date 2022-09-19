// Write a program that reads a string and generates another with the contents of the first one inverted.

#include <iostream>
#include <string> //A string funciona como se fosse um vetor.

using namespace std;

int main()
{

    string conteudo;
    
    cout << "Informe a palavra que deseja inverter : \n";
    // cin >> conteudo;
    getline(cin, conteudo); // Para ler considerando espaços entre as palavras
    cout << "Palavra digitada: " << conteudo << endl;

    for (int i = 0; i < conteudo.length(); i++) // Percorre toda a palavra
    {
        cout << conteudo[i] << endl;
    }
    cout << "O conteúdo digitado inversamente fica : \n";

    for (int i = conteudo.size() - 1; i >= 0; i--) // Enquanto o meu i for igual a 0 ou maior, o for roda.
    {
        cout << conteudo[i] << endl;
    }

    return 0;
}
