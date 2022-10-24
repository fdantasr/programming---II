#include <iostream>

using namespace std;

class Empregado{
    private:
        int cpf;
        string nome;
        double salario;
    public:
        Empregado(string nome, int cpf, double sl):
            nome(nome), cpf(cpf), salario(sl) {}
        int getCPF(){return cpf;}
        string getNome(){return nome;}
        double getSalario(){return salario;}
        void aumento(double percent){salario = salario + (salario*percent);}
        void setCPF(int c){cpf = c;}
        void setNome(string n){nome = n;}
        void setSalario(double s){salario = s;}
};

class Gerente : public Empregado{
    private:
        double bonus;
    public:
        Gerente(string n, int cpf, double salario, double b):
            Empregado(n,cpf,salario), bonus(b){}
        double getBonus(){return bonus;}
        void setBonus(double bn){bonus = bn;}
        double getSalario() {return Empregado::getSalario() + bonus;}
};

int main(){
    Empregado e1("Dwight Schrutte",123,4500.00);
    Gerente g1("Michael Scott",456,6000.00,1000.00);
    
    cout << e1.getSalario() <<endl;
    cout << g1.getSalario() <<endl;
}