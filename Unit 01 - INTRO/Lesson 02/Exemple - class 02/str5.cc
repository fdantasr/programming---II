#include <iostream>

using namespace std;

int main(){
  string line("Universidade Federal");

  for(auto &c : line)
    c = toupper(c);

  cout << line;
}
