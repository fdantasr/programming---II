#include <iostream>

namespace soma1{
    int soma (int a, int b){
        return a+b;
    }
}
namespace soma2{
    int soma (int a, int b){
        return a+b;
    }
}
int main(){

std::cout << soma1::soma(2, 4) << std::endl;

std::cout << soma2::soma(8, 4) << std::endl;


}