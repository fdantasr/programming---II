#include <iostream>
#include <string>

using namespace std;

using std::string;

void troca (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int j, k;
cout << "digite os valores a serem trocados ";
cin >> j >> k;
cout << "valores iniciais são " ;
cout << j << " e " << k;
swap(j,k);
troca(j,k);
troca(j,k);
cout << " valores finais são " ;
cout << j << " e " << k <<endl; 
}