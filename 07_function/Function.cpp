#include <iostream>

using namespace std;

int f_x(int x) {
    int result = 2 * x + 10;
    return result;
}

// void f_x(int x) {
//     int result = 2 * x + 10;
//     cout << "Hasilnya adalah: " << result << endl;
// }
 
int main () {
    int input;
    int result;
    cout << "Masukkan nilai: ";
    cin >> input;

    result = f_x(input);
    cout << "Hasilnya adalah: " << result << endl;

    cin.get();
    return 0;
}