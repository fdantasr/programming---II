#include <iostream>

using namespace std;

int main(){
  int cont;
  string line;
  getline(cin,line);

  for(auto c : line){
    if (ispunct(c))
      cont++;
  }


  cout << cont <<" pontos na frase";
}
