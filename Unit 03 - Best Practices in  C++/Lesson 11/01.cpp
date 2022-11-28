#include <iostream>

template <typename T, typename U>
void troca(T &a, U &b)
{
   

   std::cout << "Valores: " << a << " e " << b << std :: endl;
};

int main()
{
    std::string _a = "gato", _b = "cachorro"; // Caso eu queira passar como parâmetro para o compare
    troca(_a, _b);
    
    // Passando valor aos parâmetros
}