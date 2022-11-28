#include <iostream>

template <typename T>
T troca(const T &a, const T &b)
{
    if (a > b)
        return a;
    if (b > a)
        return b;

    return 0;

    std::cout << "Valores: " << a << " e " << b << std ::endl;
};

int main()
{
int _a = 2, _b = 6; 
troca(_a, _b);

auto res = troca (_a, _b);
std::cout << "O maior valor é: " << res << std:: endl;
    // Passando valor aos parâmetros
}