#include "PontoCartesiano.h"

namespace Prova3
{

    //---------------Ponto Cartesiano---------------
    template <typename T, typename U>
    // Construtor
    PontoCartesiano::PontoCartesiano() = default;
    PontoCartesiano::PontoCartesiano(const T &t, const U &u) : first(t), second(u){

    };
    // Seletores
    PontoCartesiano::T &get_first() { return first; }
    PontoCartesiano::U &get_second() { return second; }

    const T &get_first() const { return first; }
    const U &get_second() const { return second; }

}