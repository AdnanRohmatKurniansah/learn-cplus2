#include <iostream>
using namespace std;

int main () {
    int numbers = 4;
    string stars = "* ";
    
    for (int i = 1; i <= numbers; i++) {
        cout << stars << endl;
        stars += "* ";
    }

    return 0;
}
