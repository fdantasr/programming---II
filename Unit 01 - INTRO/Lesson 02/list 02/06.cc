/*Create a structure representing a rectangle, which stores its height and width. create a
function that receives such a structure and returns the area of ​​the rectangle passed as a parameter. */

#include <iostream>
#include <string>

using namespace std;

struct retangulo {
    int  altura, largura; 
};

int area(retangulo ret){
    int produto;
    produto = ret.altura * ret.largura;

    return produto; 
}

int main(){
     retangulo retan;
     cout << " digite a altura: ";
     cin >> retan.altura;
     cout << " Digite a largura: ";
     cin >> retan.largura;

     cout << area(retan);
}