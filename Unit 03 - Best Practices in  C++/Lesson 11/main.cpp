#include <iostream>

template <typename T, typename U>
int compare(const T &a, const U &b)
{
    if (a < b)
        return -1;
    if (b < a)
        return 1;

        return 0;
}

int main()
{
    std::string x = "gato", y = "cachorro";
    std::cout << compare(1, 1.5); // Passando valor aos parâmetros
}
