#include <iostream>

using namespace std;

int main()
{
  int ival = 42, ival2 = 55;
  int *p = &ival;
  *p = 7;
  cout << &ival << endl;
  cout << &ival2 << endl;
  cout << p << endl;
}
