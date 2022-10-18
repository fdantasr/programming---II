#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class VeiculoAVenda{
private:
    string marca;
    string modelo;
    int ano;
    double precoDeVenda;
public:
    VeiculoAVenda(string m, string M, int a, double pdv):
    marca(m), modelo(M), ano(a), precoDeVenda(pdv) {}

    // Metodos Seletores
    string getMarca(){return marca;}
    string getModelo(){return modelo;}
    int getAno(){return ano;}
    double getprecoDeVenda(){return precoDeVenda;}

    //Metodos Modificadores
    void setMarca(string m){marca = m;}
    void setModelo(string M){modelo = M;}
    void setAno(int a){ano = a;}
    void setprecoDeVenda(double pdv){precoDeVenda = pdv;}

    virtual void imprime(){
        cout <<"\nDados do veiculo[1]:\nMarca: "<<getMarca()<<"\nModelo: "<< getModelo()<<"\nAno: "<<getAno()<<"\nprecoDeVenda: R$"<<getprecoDeVenda()<<endl;
    }
};

class Moto : public VeiculoAVenda{
private:
    float TamAro;
public:
    Moto(string m, string M, int a, double pdv, float tA):
    VeiculoAVenda(m, M, a, pdv), TamAro(tA) {}

    float getTamAro(){return TamAro;}
    void setTamAro(float tA){TamAro = tA;}

    void imprime() override {
        cout <<"\nDados do veiculo[2]:\nMarca: "<<getMarca()<<"\nModelo: "<< getModelo()<<"\nAno: "<<getAno()<<"\nprecoDeVenda: R$"<<getprecoDeVenda()<<"\nTamanho do aro: "<<getTamAro()<<endl;
    }    
};

int main(){
    VeiculoAVenda Vav("Honda","Civic",2017,134000);
    Moto mVav("Honda","Start",2018,13000,28);

    vector <VeiculoAVenda*> x;
    x.push_back(&Vav);
    x.push_back(&mVav);

    double sum=0;

    for(auto c : x){
        sum += c->getprecoDeVenda();
        c->imprime();
    }
    
    cout << "\n\nSoma: " << sum << endl;
}