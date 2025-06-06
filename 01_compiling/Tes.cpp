#include <iostream>

using namespace std;
// std (standard library) berasal dari iostream

int tambah(int a, int b) {
    int hasil = a + b;
    return hasil;
}

// nyoba
int main() {
    string text = "Penambahan";
    cout << text << endl;
    cout << tambah(7, 9) << endl;
    return 0;
}