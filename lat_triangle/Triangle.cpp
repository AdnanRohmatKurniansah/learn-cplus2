#include <iostream>
using namespace std;

int main () {
    int numbers;
    string stars = "* ";

    cout << "Masukkan panjang pola: ";
    cin >> numbers;
    
    for (int i = 1; i <= numbers; i++) {
        cout << stars << endl;
        stars += "* ";
    }

    cin.get();
    return 0;
}
