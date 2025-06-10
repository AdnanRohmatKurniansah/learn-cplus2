#include <iostream>

using namespace std;

// global 
int x = 5;

void func() {
  cout << ++x << endl; 
}

int main() {
  func();

  cout << x; 
  return 0;
}
