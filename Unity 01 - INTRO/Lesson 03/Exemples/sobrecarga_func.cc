// Exemplos sobrecarga de função e static
#include <iostream>

int mult(int a, int b)
{                        // Função chamada mult que espera dois inteiros
    static int cont = 0; // Objeto declarado como static - indica que seu tempo de vida se manterá mesmo após o encerramento da função
    cont++;
    std::cout << cont << std::endl; // Como consequência de cont ser static, a cada nova chamada da função ele não perderá seu valor anterior
    return a * b;
}

int mult(int a, int b, int c)
{ // sobrecarga da função mult: C++ permite funções com mesmo nome, desde que elas se diferenciem pela quantidade (ou tipo) de parâmetros
    return a * b * c;
}

int mult(int a, int b, int c, int)
{ // outra sobrecarga de mult, desta vez utilizando outra possibilidade em C++, que é a de declarar um parâmetro sem nome (e que portanto não pode ser utilizado internamente)
    return a * b * c;
}

int main()
{
    mult(1, 2);              // invocação da primeira versão de mult
    mult(2, 3);              // invocação da primeira versão de mult pela segunda vez (deve imprimir 2 para cont)
    std::cout << mult(2, 3); // terceira invocação da primeira versão (cont = 3)
    mult(3, 2, 3);           // invocação da segunda versão de mult (que espera 3 parâmetros)
    mult(3, 4, 5, 0);        // invocação da terceira versão de mult, que espera quatro parâmetros, ainda que este último ela não utilize, ele deve ser passado quando for invocada
}
