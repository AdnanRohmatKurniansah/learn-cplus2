#include <iostream>

using namespace std;
// std (standard library) berasal dari iostream

int tambah(int a, int b) {
    int hasil = a + b;
    return hasil;
}

// nyoba
int main() {
    int angkapertama;
    int angkakedua;
    string text = "Penambahan";
    cout << text << endl;
    
    cout << "Masukkan angka pertama" << endl;
    cin >> angkapertama;
    
    cout << "Masukkan angka kedua" << endl;
    cin >> angkakedua;

    cout << "Hasil dari penjumlahan adalah: " << tambah(angkapertama, angkakedua) << endl;
    return 0;
}