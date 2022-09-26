// Write a program that reads a sentence from the keyboard and prints it to the screen without spaces.

#include <iostream>
#include <algorithm>
using namespace std;

// Função que remove espaços
string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

int main()
{
    string str;
    cout << "Informe a palavra que deseja inverter : \n";
    getline(cin, str);
    cout << "Palavra digitada: \n \n"
         << str << endl;

    str = removeSpaces(str);
    cout << "SENTENÇA FINAL: \n"
         << str;
    return 0;
}