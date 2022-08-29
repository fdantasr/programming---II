// Write a program that reads a temperature in Fahrenheit and displays the equivalent in Celsius

#include <iostream>

using namespace std;

int main()
{
    int fah, cel;

    cout << "Informe o valor da temperatura em Fahrenheit  : \n";
    cin >> fah;

    cel = (fah - 32) / 1.8;

    cout << "A temperatura equivalente em Celsius é : " << cel << endl;

    return 0;
}