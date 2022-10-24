#include<iostream>
#include<vector>

using namespace std;
class Animal{ //Classe Abstrata (toda classe que possui pelo menos 1 método puramente virtual)
    private:
        string nome;
    public:
        Animal(string n) : nome(n){};
        virtual void move() = 0; //método puramente virtual
        virtual string getNome() {return nome;}

}; //Se a classe possui todos os métodos puramente virtuais, ela é chamada de Interface

class Gato : public Animal{
    private:
        int numVidas;
    public:
        Gato() : Animal("Whiskers"), numVidas(7){};
        void move() override {cout << "O gato andou\n";}
        string getNome() override {return Animal::getNome() +" e algo a mais do gato\n";}
};

class Abelha : public Animal{
    private:
        string ocupacao;
    public:
        Abelha() : Animal("Bee"), ocupacao("zangão"){};
        void move() override {cout << "A abelha voou\n";}
        string getNome() override {return Animal::getNome() +" e algo a mais da abelha\n";}
};

class Ornitorrinco : public Animal{
    private:
        int idade;
    public:
        Ornitorrinco() : Animal("Ornie"), idade(1500){};
        void move() override {cout << "O ornitorrinco voou e andou\n";}
        string getNome() override {return Animal::getNome() +" e algo a mais do ornitorrinco\n";}
};

int main(){
    vector <Animal*> x; //posso declará-a como ponteiro ou vetor de ponteiro, mas não posso declará-la como um objeto concreto
    Gato g;
    Abelha a;
    Ornitorrinco o;
    x.push_back(&g);
    x.push_back(&a);
    x.push_back(&o);
    for (auto z : x){
        cout << z->getNome();
    }


}