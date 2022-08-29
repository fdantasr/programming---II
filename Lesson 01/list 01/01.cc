// Write a program to read two numbers from the keyboard and print the largest between them

#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cout << "Informe o valor de a : \n";
    cin >> a;

    cout << "Informe o valor de b : \n ";
    cin >> b;

    if (a == b)
    {
        cout << "[ERRO] Os número são iguais";
    }

    if (a > b)
    {
        cout << "O maior número é : " << a << endl;
    }

    else
    {
        cout << "O maior número é : " << b << endl;
    }

    return 0;
}
