#include <iostream>

using namespace std;

// menghitung luas persegi panjang
double hitung_luas(double panjang, double lebar) {
    double luas = panjang * lebar;
    return luas;
}

// menghitung keliling persegi panjang
double hitung_keliling(double panjang, double lebar) {
    double keliling = (panjang * 2) + (lebar * 2);
    return keliling;
}   

int main () {
    double panjang;
    double lebar;
    double luas;
    double keliling;

    cout << "== Program menghitung luas dan keliling persegi panjang ==" << endl;
    cout << "Masukkan panjangnya: ";
    cin >> panjang;

    cout << "Masukkan lebarnya: ";
    cin >> lebar;
    
    luas = hitung_luas(panjang, lebar);
    keliling = hitung_keliling(panjang, lebar);

    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;

    return 0;
}