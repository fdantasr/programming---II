#include <iostream>
#include<math.h>
#include<vector>

using namespace std;

class ObjetoGeometrico{
private:
    //---
public:
    virtual void getmostrardados() =0;
    virtual void getarea() =0;
};

class circulo: public ObjetoGeometrico{
private:
    float val1;
public:
    //construtor
    circulo (float val1) : val1(val1){};
    
    void getmostrardados() override{cout<<"\nValor 1:"<<val1;}
    //funcao
    void getarea() override{
        cout<<"Area CIRCULO: "<<3.14 * (val1 * val1)<<"\n"<<"Perimetro: "<<2 * 3.14 * val1<<"\n\n";
    }

};

class retangulo: public ObjetoGeometrico{
private:
    float val1, val2;
public:
    //construtor
    retangulo (float val1, float val2) : val1(val1), val2(val2){};

    void getmostrardados() override{cout<<"\nValor 1: "<<val1<<"\nValor 2: "<<val2;}
    //funcao
    void getarea() override{
        cout<<"Area RETANGULO: "<<val1 * val2<<"\n"<<"Perimetro: "<<(2 * val1) + (2 * val2)<<"\n\n";
    }

};

class triangulo: public ObjetoGeometrico{
private:
    float val1, val2, val3;
public:
    //construtor
    triangulo(float val1, float val2, float val3) : val1(val1), val2(val2), val3(val3){};

    void getmostrardados() override{cout<<"\nValor 1: "<<val1<<"\nValor 2: "<<val2<<"\nValor 3: "<<val3;}
    //funcao
    float getperimetro(){return val1 + val2 + val3;}
    void getarea() override{
        cout<<"Area TRIANGULO: "<<sqrt((2/getperimetro()) * (getperimetro() - val1) * (getperimetro() - val2) * (getperimetro() - val3))<<"\n"<<"Perimetro: "<<getperimetro()<<"\n\n";
    }

};

int main(){
    vector<ObjetoGeometrico*> vet;

    circulo a(6);
    retangulo r(3,4);
    triangulo t(3,6,7);

    vet.push_back(&a);
    vet.push_back(&r);
    vet.push_back(&t);

    for(auto opa : vet){
        opa->getarea();
    }
    
    return 0;
}