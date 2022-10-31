#include <iostream>

class Produto{
  private:
    double preco;
    int qtd;
  public:
    Produto(int q, double p) : preco(p), qtd(q){}
    friend Produto operator+(Produto &lop, Produto &rop);
    friend int operator++(Produto &lop);
    
    friend std::ostream& operator<<(std::ostream &os, const Produto &p);
    friend std::istream& operator>>(std::istream &is, Produto &p);
    Produto& operator+=(const Produto &p);
    double getPreco(){return preco;}
    double getQtd(){return qtd;}
};

Produto operator+(Produto &lop, Produto &rop){
  Produto p(0,0);
  p.qtd = lop.qtd + rop.qtd;
  p.preco = lop.preco + rop.preco;
  return p;
}

int operator++(Produto &lop){
  return lop.qtd++;
}


std::ostream& operator<<(std::ostream &os, const Produto &p)
{
  os << p.preco <<" , " << p.qtd;
  return os;
}

std::istream& operator>>(std::istream &is, Produto &p){
  int x;
  std::cout << "Informe qtd e preco do produto\n";
  is >>  p.qtd >> p.preco;
  if(is){
    
  }
  return is;
}

Produto& Produto::operator+=(const Produto &p){
  this->qtd+=p.qtd;
  this->preco+=p.preco;

  return *this;
}

int main() {
  Produto p1(2,7), p2(5,8);
  Produto p4(99,99);
  std::cin >> p4;
  std::cout << p4;
  Produto p3 = p1+p2;
  std::cout << p3.getPreco() << std::endl;
  ++p3;
  std::cout << p3.getQtd()<<std::endl;
  //std::cout << p4.getPreco() << std::endl;

  p4+=p1;
  std::cout << p4.getPreco() << std::endl;
}