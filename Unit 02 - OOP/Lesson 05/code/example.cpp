#include <iostream>

using namespace std;

class Cachorro{
private:
    float peso;
    string raca;
    int idade;
public:
    Cachorro() = default;
    Cachorro(float p, string r, int id) : peso(p), raca(r), idade(id){};
    //métodos modificadores
    void setPeso(float p){peso = p;}
    void setRaca(string r){raca = r;}
    void setIdade(int id){idade = id;}
    //métodos seletores
    float getPeso(){return peso;}
    string gerRaca(){return raca;}
    int getIdade(){return idade;}

    void toString(){
        cout << "Peso: " << peso <<endl;
        cout << "Raça: " << raca <<endl;
        cout << "Idade: "<< idade <<endl;
    }
};

class Conta{
  private:
    int numero;
    string nome;
    float saldo = 10.0;
  public:
    Conta(int n, string nm):numero(n),nome(nm){};
    Conta(int n, string nm, float s):numero(n),nome(nm),saldo(s){}
    int getNumero();
    string getNome();
    float getSaldo();
    float depositar(float);
    float sacar(float);
    void imprime();
    void setNome(string);
    void setNum(int);
};

int Conta::getNumero(){
  return numero;
}

string Conta::getNome(){
  return nome;
}

float Conta::getSaldo(){
  return saldo;
}

float Conta::depositar(float qtd){
  saldo = saldo + qtd;
  return saldo;
}

void Conta::imprime(){
  cout << "Correntista: " <<nome<<endl;
  cout << "Num conta: " <<numero<<endl;
  cout << "Saldo: " <<saldo<<endl;
}
float Conta::sacar(float qtd){
  if (saldo-qtd > 0){
    saldo -= qtd;
  }else{
    cout << "Saldo insuficiente\n";
  }
  return saldo;
}

void Conta::setNome(string nm){
  nome = nm;
}
void Conta::setNum(int num){
  numero=num;
}


int main(){

     Cachorro c1 =  Cachorro();
     Cachorro c2(17.2, "Mutante", 600);
     c2.toString();
     c2.setIdade(1000);
     c2.toString();
  
  
  //Conta c1(2244,"José");
  //Conta c2(3364,"Maria",100.0);
  //c1.imprime();
  //c2.imprime();
  //c2.depositar(100);
  //c2.imprime();
  //c2.sacar(150);
  //c2.imprime();
  //c2.setNum(4499);
  //c2.imprime();
  //c2.sacar(80);
  //c2.imprime();
 
}