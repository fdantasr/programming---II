#include <iostream>

using namespace std;

void reset(int *i) // Passagem por ponteiro
{
  *i = 0;
}
void reset2(int i) // Passagem por cópia
{
  i = 0;
}
void reset3(int &i) // Passagem por referência. Uma referência é o mesmo objeto, mas com um nome diferente e a referência deve se referir a um objeto.
{
  i = 0;
}
int main()
{
  int x = 10;
  reset(&x);
  // reset2(x);
  // reset3(x);
  cout << x;
}
