#include <iostream>

using namespace std;

int main() {
    int a = 5;

    // pointer
    int *aPtr = nullptr;
    aPtr = &a;

    // int a mempunyai nilai dan address ( alamat )

    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << aPtr << endl;

    // dereferencing, mengambil data dari sebuah pointer
    cout << "Mengambil data dari pointer aPtr: " << *aPtr << endl;

    return 0;
}