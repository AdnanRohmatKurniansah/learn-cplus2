#include <iostream>

using namespace std;

void function(int *b) {
    cout << "Address b: " << b << endl; 
    cout << "Nilai b: " << *b << endl; 
}

void kuadrat(int *valPtr) {
    *valPtr = (*valPtr) * (*valPtr);
    cout << "Hasil kuadrat: " << *valPtr << endl;
}

int main () {
    int a = 5;
    cout << "Address a: " << &a << endl;
    cout << "Nilai a: " << a << endl;
    function(&a);
    kuadrat(&a);

    return 0;   
}