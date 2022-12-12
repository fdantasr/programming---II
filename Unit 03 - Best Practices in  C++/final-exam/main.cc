#include <iostream>
#include "PontoCartesiano.h"

// using namespace prova3

int main()
{
   Prova3::PontoCartesiano p1;
   Prova3::PontoCartesiano p2;

    PontoCartesiano<int> p1(2, 2);
    PontoCartesiano<int> p2(3, 3);
    auto p3 = p1 + p2;
    p3.imprime(); //(5,5)
    return 0;
}