#include <iostream>

template <typename T, typename U>
int compare(const T &valor1, const U &valor2)
{
    if (a < b)
        return -1;
    if (b < a)
        return 1;

    return 0;
}

int main()
{
    std::string _valor1 = "gato", _valor2 = "cachorro"; // Caso eu queira passar como parâmetro para o compare
    std::cout << compare(1, 1.5);                       // Passando valor aos parâmetros
}
