// Write a program that reads an integer array of size 10 and prints only the pairs.

#include <iostream>
#define MAX_SIZE 10
using namespace std;

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
    int num;
    cout << "Entre com o tamanho do vetor: ";
    cin >> num;

    for (int i = 0; i < 10; i++)
    {
        cin >> vet[i];
    }
    for (auto x : vet)
    {
        if (par(x))
        {
            cout << x << endl;
        }
    }
}
