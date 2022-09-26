#include <iostream>

using namespace std;

void incrementa (int *g){
    *g = *g + 1;
}

int main(){
    int a;

    cout << " Insere um valor " << endl;
    cin >> a;

    cout << " O valor " << a << " tornou-se ";

    incrementa(&a);

    cout << a << endl;
}