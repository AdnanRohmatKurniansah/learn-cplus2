#include <iostream>

using namespace std;

int main () {
    int nilai;

    cout << "Masukkan nilai anda: " << endl;
    cin >> nilai;

    if (nilai >= 85) {
        cout << "Sangat baik" << endl;
    } else if(nilai >= 75) {
        cout << "Baik" << endl;
    } else {
        cout << "Kurang baik" << endl;
    }


    // int nilai = 75;
    // string result =  (nilai > 75) ? "Bagus" : "Kurang Bagus";
    // cout << result << endl;
}