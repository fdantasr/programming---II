#ifndef PontoCartesiano_h
#define PontoCartesiano_h
#include <iostream>

namespace Prova3
{
    //---Template passando as coordenadas X e Y--
    template <typename T, typename U>

    //---Ponto Cartesiano---
    class PontoCartesiano
    {
     private:

        T first;
        U second;

    public:
        // Construtor default
        PontoCartesiano();
        // Construtor passando os valores x (first) e y (second) usando template
        PontoCartesiano(const T &t, const U &u) : first(t), second(u) {}

        T &get_first();
        U &get_second();

};
}
#endif